#include<iostream>
//因为这是一个指令而不是程序语句，所以不需要用分号来结束。
#define MAX 1000
using namespace std;


// 菜单页面
void showMenu(){
    cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

// 1.设计联系人结构体
struct Person {
    string Name;
    int Sex;
    int Age;
    string Phone;
    string addr;
};
// 2.设计通讯录结构体
struct Addressbooks{
    struct Person personArray[MAX];
    int Size;//通讯录中人员个数
};
// 3.封装添加联系人函数
void addPerson(Addressbooks * abs){
    // 判断电话本是否满了
    if(abs -> Size == MAX){
        cout<<"通讯录已满，无法添加"<<endl;
        return ;
    }else{
        string name;
        cout << "请输入姓名：" << endl;
		cin >> name;
        abs -> personArray[abs->Size].Name = name;

        cout<<" 请输入性别： "<<endl;
        cout<<" 1 -- 男 " <<endl;
        cout<< "2 -- 女" <<endl;
        int sex;
        while(true){
            cin>>sex;
            if(sex == 1 || sex == 2){
                abs->personArray[abs->Size].Sex = sex;
                break;
            }
            cout<<"输入有误，请重新输入";
        }
        // 年龄
        cout<<"请输入年龄："<<endl;
        int age = 0 ;
        cin >> age;
        abs->personArray[abs->Size].Age = age;

        // 联系电话
        cout << "请输入联系电话：" << endl;
        string phone = "";
        cin >> phone;
        abs -> personArray[abs -> Size].Phone = phone;

        // 家庭地址
        cout<< "请输入家庭地址："<<endl;
        string addr = "";
        cin >> addr;
        abs -> personArray[abs -> Size].addr = addr;

        // 更新通讯录数量
        abs->Size++;
        cout<<"添加成功"<<endl;
    }
}
// 4.显示联系人
void showPerson(Addressbooks * abs){
    if(abs -> Size == 0){
        cout<<"当前记录为空"<<endl;
    }
    for(int i = 0; i < abs->Size; i++){
        cout<<"姓名："<<abs -> personArray[i].Name <<"\t";
        cout<<"性别："<<(abs -> personArray[i].Sex == 1 ? "男" : "女")<<"\t";
        cout<<"年龄: "<<abs -> personArray[i].Age << "\t";
        cout<<"电话："<<abs -> personArray[i].Phone << "\t";
        cout<< "地址" <<abs -> personArray[i].addr <<endl;
    }
}
// 5.删除联系人
// 5.1 先封装这个联系人是否存在
int isExit(Addressbooks * abs, string name){
    for(int i = 0; i < abs -> Size ; i++){
        if(abs -> personArray[i].Name == name){
            return i;
        }
    }
    return -1;
}
void removePerson(Addressbooks * abs){
    cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

    int ret = isExit(abs, name);
    if(ret != -1){
        for(int i = ret; i< abs->Size; i++){
            abs -> personArray[i] = abs -> personArray[i + 1];
        }
        abs -> Size--;
        cout << "删除成功" <<endl;
    }else{
        cout<<"查无此人"<<endl;
    }
}
// 6.查找联系人
void findPerso(Addressbooks * abs){
    cout<<"请输入要查找的人："<<endl;
    string name;
    cin>> name;

    int ret = isExit(abs, name);
    if(ret != -1){
        cout<<"姓名："<<abs -> personArray[ret].Name <<"\t";
        cout<<"性别："<<(abs -> personArray[ret].Sex == 1 ? "男" : "女")<<"\t";
        cout<<"年龄: "<<abs -> personArray[ret].Age << "\t";
        cout<<"电话："<<abs -> personArray[ret].Phone << "\t";
        cout<< "地址" <<abs -> personArray[ret].addr <<endl;
    }else{
        cout << "查无此人" << endl;
    }
}
// 7.修改联系人

// 8.清空联系人

int main(){
    // 创建通讯录变量
    Addressbooks abs;
    // 初始化通讯录中人数
    abs.Size = 0;

    int select = 0 ;
    while(true){
        showMenu();
        cin>>select;
        switch (select)
		{
		case 1:  //添加联系人
        addPerson(&abs);
			break;
		case 2:  //显示联系人
        showPerson(&abs);
			break;
		case 3:  //删除联系人
        removePerson(&abs);
			break;
		case 4:  //查找联系人

			break;
		case 5:  //修改联系人
			break;
		case 6:  //清空联系人
			break;
        case 0: // 退出通讯录
         cout<<"欢迎下次使用"<<endl;
         return 0;
         break;
         default: 
          break;
    }
}
}