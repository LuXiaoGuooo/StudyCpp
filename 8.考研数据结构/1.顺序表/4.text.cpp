#include <iostream>
#include <cstdlib> // 用于 exit 函数
using namespace std;

// 链表节点结构
typedef struct ListNode {
    int val;
    ListNode* next;
    
    // 构造函数
    ListNode(int x = 0) : val(x), next(nullptr) {}
} ListNode, *LinkList;

// 1. 初始化链表 - 创建带头节点的空链表
LinkList InitList() {
    // 创建头节点（哨兵节点）
    LinkList head = new ListNode();
    head->next = nullptr;  // 确保初始为空链表
    return head;
}

// 2. 判断链表是否为空
bool IsEmpty(LinkList head) {
    return head->next == nullptr;
}

// 3. 在链表尾部添加节点
void Append(LinkList head, int value) {
    ListNode* current = head;
    // 遍历到链表末尾
    while (current->next != nullptr) {
        current = current->next;
    }
    // 创建新节点并连接到尾部
    current->next = new ListNode(value);
}

// 4. 在链表头部插入节点
void Prepend(LinkList head, int value) {
    ListNode* newNode = new ListNode(value);
    newNode->next = head->next; // 新节点指向原首节点
    head->next = newNode;       // 头节点指向新节点
}

// 5. 打印链表内容
void PrintList(LinkList head) {
    if (head == nullptr) {
        cerr << "Error: Invalid list pointer!" << endl;
        return;
    }
    
    ListNode* current = head->next; // 跳过头节点
    cout << "Head -> ";
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// 6. 查找节点
ListNode* FindNode(LinkList head, int value) {
    ListNode* current = head->next; // 跳过头节点
    while (current != nullptr) {
        if (current->val == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr; // 未找到
}

// 7. 删除节点（按值）
bool RemoveNode(LinkList head, int value) {
    ListNode* prev = head;
    ListNode* current = head->next;
    
    while (current != nullptr) {
        if (current->val == value) {
            prev->next = current->next;
            delete current;
            return true; // 删除成功
        }
        prev = current;
        current = current->next;
    }
    return false; // 未找到节点
}

// 8. 清空链表（保留头节点）
void ClearList(LinkList head) {
    ListNode* current = head->next;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    head->next = nullptr; // 重置头节点指针
}

// 9. 销毁整个链表（包括头节点）
void DestroyList(LinkList& head) {
    ClearList(head); // 先清空数据节点
    delete head;     // 再释放头节点
    head = nullptr;  // 指针置空防止误用
}

// 10. 获取链表长度
int ListLength(LinkList head) {
    int count = 0;
    ListNode* current = head->next;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

// 11. 在指定位置插入节点
bool InsertAt(LinkList head, int position, int value) {
    if (position < 0) return false;
    
    ListNode* prev = head;
    int index = 0;
    
    // 找到插入位置的前一个节点
    while (prev != nullptr && index < position) {
        prev = prev->next;
        index++;
    }
    
    if (prev == nullptr) return false; // 位置超出范围
    
    ListNode* newNode = new ListNode(value);
    newNode->next = prev->next;
    prev->next = newNode;
    return true;
}

int main() {
    // 初始化带头节点的空链表
    LinkList myList = InitList();
    
    cout << "初始链表: ";
    PrintList(myList); // 输出: Head -> NULL
    
    // 添加节点
    Append(myList, 10);
    Append(myList, 20);
    Prepend(myList, 5);
    
    cout << "添加节点后: ";
    PrintList(myList); // 输出: Head -> 5 -> 10 -> 20 -> NULL
    
    // 查找节点
    ListNode* found = FindNode(myList, 10);
    if (found) {    
        cout << "找到节点: " << found->val << endl;
    }
    
    // 删除节点
    RemoveNode(myList, 10);
    cout << "删除10后: ";
    PrintList(myList); // 输出: Head -> 5 -> 20 -> NULL
    
    // 在指定位置插入
    InsertAt(myList, 1, 15); // 在位置1插入15
    cout << "位置1插入15后: ";
    PrintList(myList); // 输出: Head -> 5 -> 15 -> 20 -> NULL
    
    // 获取链表长度
    cout << "链表长度: " << ListLength(myList) << endl; // 输出: 3
    
    // 清空链表
    ClearList(myList);
    cout << "清空后: ";
    PrintList(myList); // 输出: Head -> NULL
    
    // 添加新节点
    Append(myList, 100);
    cout << "添加100后: ";
    PrintList(myList); // 输出: Head -> 100 -> NULL
    
    // 销毁整个链表
    DestroyList(myList);
    
    // 尝试使用已销毁的链表
    cout << "销毁后: ";
    PrintList(myList); // 输出: Error: Invalid list pointer!
    
    return 0;
}