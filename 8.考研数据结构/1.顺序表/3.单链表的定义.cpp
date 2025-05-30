#include<iostream>
#include<cstdlib> // 用于 exit 函数
using namespace std;

//1. 定义单链表
typedef struct ListNode {
    int val;         // 节点值（数据域）
    ListNode* next; // 指向下一节点的指针（指针域）
    ListNode(int x = 0) : val(x), next(NULL) {}  // 构造函数
} ListNode, *LinkList;
/*
这里的LinkList 其实就是 ListNode*
ListNode: 结构体类型，包含数据域 val 和指针域 next
使用对比：
ListNode node;        // 在栈上创建结构体实例（自动释放）
node.val = 10;        // 直接访问数据成员

ListNode* p = new ListNode();  // 在堆上动态分配内存
p->val = 20;          // 通过指针访问数据成员
delete p;             // 必须手动释放内存
*/


// 2. 初始化链表 - 创建带头节点的空链表
LinkList InitList() {
    // 创建头节点
    LinkList head = new ListNode();
    head->next = nullptr;  // 确保初始为空链表
    return head;
}

//3. 检查链表是否为空
bool IsEmpty(LinkList head){
    return head -> next == nullptr;
}

//4. 在链表尾部添加节点
void AddEnd(LinkList head, int value){
    ListNode* current = head;
    // 遍历到链表末尾
    while(current -> next != nullptr){
        current = current -> next;
    }
    //创建新节点并连接到尾部
    current -> next = new ListNode(value);
}

//5. 在链表头部插入节点
void PerpEnd(LinkList head, int value){
    ListNode* newNode = new ListNode(value);
    newNode -> next = head -> next;
    head -> next = newNode;
}

//6. 打印链表内容
void PrintList(LinkList head){
    if(head == nullptr){
        cerr<<"错误"<<endl;
        return ;
    }

    ListNode* current = head -> next;
    cout<<"Head -> ";
    while( current != nullptr){
        cout<< current -> val << " -> ";
        current = current -> next;
    }
    cout << "NULL" <<endl;
}

//7. 查找链表节点
ListNode* FindNode(LinkList head, int value){
    LinkList current = head -> next;//跳过头节点
    while(current != nullptr){
        if(current -> val == value){
            return current;
        }
        current = current -> next;
    }
    return nullptr;
}

//8. 删除节点(按值)
bool RemoveNode(LinkList head, int value){
    ListNode* prev = head; // 1.初始化前驱指针
    ListNode* current = head -> next; //2.初始化第一个有效节点

    while(current != nullptr){//遍历链表
        if(current -> val == value){//匹配目标值
            prev -> next = current -> next;//跳过当前节点
            delete current;//释放内存
            return true;//删除成功
        }
        prev = current;//前驱指针后移
        current = current -> next;//当前指针后移
    }
    return false;//没找到
}

//9. 清空链表（保留头节点）
void ClearList(LinkList head){
    ListNode* current = head -> next;
    while(current != nullptr){
        ListNode * temp = current;
        current = current -> next;
        delete temp;
    }
    head -> next = nullptr;//重制头节点指针
}

//10. 销毁整个链表（包括头节点）
void DestroyList(LinkList& head){
    ClearList(head);//先清空数据节点
    delete head; //再释放头节点
    head = nullptr; //指针置空防止误用
}

// 11. 获取链表长度
int ListLength(LinkList head){
    int count = 0 ;
    ListNode * current = head -> next;
    while( current != nullptr ){
        count++;
        current = current -> next;
    }
    return count;
}

// 12. 在指定位置插入节点
bool InserAt(LinkList head, int position, int value){
    if(position < 0 ) return false;

    ListNode* prev = head;
    int index = 0;

    // 找到插入位置的前一个节点
    while(prev != nullptr && index < position){
        prev = prev -> next;
        index ++;
    }

    if(prev == nullptr) return false; //位置超出

    ListNode * newNode = new ListNode(value);
    newNode -> next = prev -> next;
    prev -> next = newNode;
    return true;
}

int main(){
    LinkList myList = InitList();
    PrintList(myList);

    cout<<"............."<<endl;
    //添加节点
    AddEnd(myList, 20);
    AddEnd(myList, 10);
    AddEnd(myList, 5);
    PrintList(myList);

    cout<<"............."<<endl;
    // 查找节点
    cout<<"该节点的地址为："<<FindNode(myList, 20)<<endl;
}