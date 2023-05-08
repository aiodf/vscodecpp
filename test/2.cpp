/*
 * @Author       : aiodf 1796997271@qq.com
 * @Date         : 2023-03-28 19:19:29
 * @LastEditors  : aiodf 1796997271@qq.com
 * @LastEditTime : 2023-03-29 11:37:36
 * @FilePath     : \test2\2.cpp
 * @Description  : // // #include<iostream>
 * */
using namespace std;
#include<string>
#include<iostream>
class Cube
{
public:

	//姓名设置可读可写
	void setm_L(int l) {
		m_L = l;
	}
	int  getL()
	{
		return m_L;
	}


	void setm_W(int w) {
		m_W = w;
	}
	int  getW()
	{
		return m_W;
	}
	void setm_H(int h) {
		m_H = h;
	}
	int  getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return (m_L * m_H + m_L * m_W + m_W * m_H) * 2;
	}

	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	bool Compare(Cube& c2)
	{
		if (getL() == c2.getL() && getW() == c2.getW() && getH() == c2.getH())
		{
			return true;
		}
		return false;
	}
private://属性
	int m_L;
	int m_W;
	int m_H;
};

bool Compare(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL()&& c1.getW() == c2.getW()&& c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main() {
	Cube c1;
	c1.setm_H(10);
	c1.setm_W(10);
	c1.setm_L(11);

	Cube c2;
	c2.setm_H(10);
	c2.setm_W(10);
	c2.setm_L(11);

	cout <<c1.calculateS() << endl;
	cout << c1.calculateV() << endl;

	cout << Compare(c1,c2) << endl;
	cout << c1.Compare(c2) << endl;
	

	return 0;
}

// // #include<iostream>
// // using namespace std;
// // #include<string>
// //
// // class Person
// //{
// // public:
// //	//构造函数
// //	Person(int a)
// //	{
// //		cout << "Person的构造函数调用" << endl;
// //	}
// //	//析构函数
// //	~Person()
// //	{
// //		cout << "Person的析构函数调用" << endl;
// //	}
// //
// // };
// //
// // void test01()
// //{
// //	Person p(2);
// // }
// //
// // int main() {
// //
// //	test01();
// //	//Person p;
// //	
// //
// //	return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // #include<string>
// //
// //
// // class Person {
// // public:
// //	Person() {
// //		m_A = 0;
// //		m_B = 0;
// //	}
// //	//Person P；相当于Person *const P;表示指向的指向不可变
// //		//this指针的本质是一个指针常量，指针的指向不可修改
// //		//如果想让指针指向的值也不可以修改，需要声明常函数
// //	void ShowPerson() const {
// //		//相当于 const Type* const pointer; 表示指向不可变，指向的值也不可变
// //		//this = NULL; //不能修改指针的指向 Person* const this;
// //		//this->m_A = 100; //但是this指针指向的对象的数据是可以修改的（在非常函数下）
// //
// //		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
// //		this->m_B = 100;
// //	}
// //
// //	void MyFunc() const {
// //		m_B = 10000;
// //	}
// //	void Mfun()
// //	{
// //
// //	}
// //
// // public:
// //	int m_A;
// //	mutable int m_B; //可在常函数下修改 可变的
// // };
// //
// //
// ////const修饰对象  常对象
// // void test01() {
// //
// //	const Person person; //常量对象
// //	// person.m_A = 100;
// //	cout << person.m_A << endl;
// //	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
// //	person.m_B = 100; //但是常对象可以修改mutable修饰成员变量
// //	cout << person.m_B << endl;
// //	//常对象访问成员常函数
// //	person.MyFunc(); //
// //	cout << person.m_B << endl;
// //	//person.Mfun();//常对象不可调用普通成员函数，因为普通函数可以修改值。
// // }
// //
// // int main() {
// //
// //	test01();
// //
// //	
// //
// //	return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // #include<string>
// //
// // class Building;
// // class goodGay
// //{
// // public:
// //	goodGay();
// //	void visit();
// //	void visit2();
// // private:
// //	Building* building;
// // };
// //
// // class Building
// //{
// //	friend void goodGay::visit();
// // public:
// //	Building();
// // public:
// //	string m_sittingRoom;
// // private:
// //	string m_BedRoom;
// // };
// //
// //
// // Building::Building()
// //{
// //	this->m_sittingRoom = "客厅";
// //	this->m_BedRoom = "卧室";
// // }
// //
// // goodGay::goodGay()
// //{
// //	building = new Building;
// //
// // }
// //
// // void goodGay::visit()
// //{
// //	cout << "好友正在访问" << building->m_sittingRoom << endl;
// //	cout << "好友正在访问" << building->m_BedRoom << endl;
// // }
// //
// // void goodGay::visit2()
// //{
// //	cout << "好友正在访问2" << building->m_sittingRoom << endl;
// // }
// //
// // void test01()
// //{
// //	goodGay gg;
// //	gg.visit();
// //	gg.visit2();
// // }
// // int main()
// //{
// //	test01();
// //
// //	return 0;
// // }

// // #include<string>
// // #include<iostream>
// // using namespace std;
// // class Person
// //{
// // public:
// //
// //	Person() ;
// //	Person(int a, int b)
// //	{
// //		this->m_A = a;
// //		this->m_B = b;
// //	}
// //	/*Person operator+(Person& p)
// //	{
// //		Person temp;
// //		temp.m_A = this->m_A + p.m_A;
// //		temp.m_B = this->m_B + p.m_B;
// //		return temp;
// //	}*/
// //
// // public:
// //	int m_A;
// //	int m_B;
// // };
// // Person::Person()
// //{
// //
// //
// // }
// // Person operator+(const Person &p1, const Person &p2)
// //{
// //
// //	Person temp;
// //	temp.m_A = p1.m_A + p2.m_A;
// //	temp.m_B = p1.m_B + p2.m_B;
// //	return temp;
// // }
// // void test01()
// //{
// //	Person a(10,10);
// //	//a.m_A = 10;
// //	//a.m_B = 10;
// //	Person b(10,10);
// //	//b.m_A = 10;
// //	//b.m_B = 10;
// //	Person c = a + b;
// //
// //
// //	cout << c.m_A << endl;
// //	cout << c.m_B << endl;
// // }
// // int main()
// //{
// //	test01();
// //	return 0;
// // }

// // #include<string>
// // #include<iostream>
// // using namespace std;
// // class Animal
// //{
// // public:
// //	int m_Age;
// // };
// //
// ////继承前加virtual关键字后，变为虚继承
// ////此时公共的父类Animal称为虚基类
// //
// // class Tuo : virtual public Animal {};
// // class Sheep : virtual public Animal {};
// // class Shep : virtual public Animal {};
// // class SheepTuo : public Sheep, public Tuo ,public Shep {};
// //
// // void test01()
// //{
// //	SheepTuo st;
// //
// //	st.Sheep::m_Age = 100;
// //	st.Tuo::m_Age = 200;
// //	st.Shep::m_Age = 300;
// //	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
// //	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
// //	cout << "st.m_Age = " << st.m_Age << endl;
// //}
// //
// //
// // int main() {
// //
// //	test01();
// //
// //	
// //
// //	return 0;
// //}

/*
#include <string>
#include <iostream>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "Animal 构造函数调用！" << endl;
    }
    virtual void Speak() = 0;

    // 析构函数加上virtual关键字，变成虚析构函数
    ~Animal()
    {
        cout << "Animal虚析构函数调用！" << endl;
    }

    //virtual ~Animal() = 0;
};

// Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
// }

// 和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat构造函数调用！" << endl;
        m_Name = new string(name);
    }
    virtual void Speak()
    {
        cout << *m_Name << "小猫在说话!" << endl;
    }
    ~Cat()
    {
        cout << "Cat析构函数调用!" << endl;
        if (this->m_Name != NULL)
        {
            delete m_Name;
            m_Name = NULL;
        }
    }

public:
    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->Speak();

    // 通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
    // 怎么解决？给基类增加一个虚析构函数
    // 虚析构函数就是用来解决通过父类指针释放子类对象
    delete animal;
}

int main()
{

    test01();

   

    return 0;
}*/

