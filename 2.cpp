/*
 * @Author       : aiodf 1796997271@qq.com
 * @Date         : 2023-03-28 19:19:29
 * @LastEditors  : aiodf 1796997271@qq.com
 * @LastEditTime : 2023-03-29 11:37:36
 * @FilePath     : \test2\2.cpp
 * @Description  : // // #include<iostream>
// // using namespace std;
// // #include<string>
// // class Cube
// //{
// // public:
// //
// //	//�������ÿɶ���д
// //	void setm_L(int l) {
// //		m_L = l;
// //	}
// //	int  getL()
// //	{
// //		return m_L;
// //	}
// //
// //
// //	void setm_W(int w) {
// //		m_W = w;
// //	}
// //	int  getW()
// //	{
// //		return m_W;
// //	}
// //	void setm_H(int h) {
// //		m_H = h;
// //	}
// //	int  getH()
// //	{
// //		return m_H;
// //	}
// //
// //	int calculateS()
// //	{
// //		return (m_L * m_H + m_L * m_W + m_W * m_H) * 2;
// //	}
// //
// //	int calculateV()
// //	{
// //		return m_L * m_H * m_W;
// //	}
// //
// //	bool Compare(Cube& c2)
// //	{
// //		if (getL() == c2.getL() && getW() == c2.getW() && getH() == c2.getH())
// //		{
// //			return true;
// //		}
// //		return false;
// //	}
// // private://����
// //	int m_L;
// //	int m_W;
// //	int m_H;
// // };
// //
// // bool Compare(Cube& c1, Cube& c2)
// //{
// //	if (c1.getL() == c2.getL()&& c1.getW() == c2.getW()&& c1.getH() == c2.getH())
// //	{
// //		return true;
// //	}
// //	return false;
// // }
// //
// // int main() {
// //	Cube c1;
// //	c1.setm_H(10);
// //	c1.setm_W(10);
// //	c1.setm_L(11);
// //
// //	Cube c2;
// //	c2.setm_H(10);
// //	c2.setm_W(10);
// //	c2.setm_L(11);
// //
// //	cout <<c1.calculateS() << endl;
// //	cout << c1.calculateV() << endl;
// //
// //	cout << Compare(c1,c2) << endl;
// //	cout << c1.Compare(c2) << endl;
// //	system("pause");
// //
// //	return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // #include<string>
// //
// // class Person
// //{
// // public:
// //	//���캯��
// //	Person(int a)
// //	{
// //		cout << "Person�Ĺ��캯������" << endl;
// //	}
// //	//��������
// //	~Person()
// //	{
// //		cout << "Person��������������" << endl;
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
// //	system("pause");
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
// //	//Person P���൱��Person *const P;��ʾָ���ָ�򲻿ɱ�
// //		//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
// //		//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
// //	void ShowPerson() const {
// //		//�൱�� const Type* const pointer; ��ʾָ�򲻿ɱ䣬ָ���ֵҲ���ɱ�
// //		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
// //		//this->m_A = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵģ��ڷǳ������£�
// //
// //		//const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
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
// //	mutable int m_B; //���ڳ��������޸� �ɱ��
// // };
// //
// //
// ////const���ζ���  ������
// // void test01() {
// //
// //	const Person person; //��������
// //	// person.m_A = 100;
// //	cout << person.m_A << endl;
// //	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
// //	person.m_B = 100; //���ǳ���������޸�mutable���γ�Ա����
// //	cout << person.m_B << endl;
// //	//��������ʳ�Ա������
// //	person.MyFunc(); //
// //	cout << person.m_B << endl;
// //	//person.Mfun();//�����󲻿ɵ�����ͨ��Ա��������Ϊ��ͨ���������޸�ֵ��
// // }
// //
// // int main() {
// //
// //	test01();
// //
// //	system("pause");
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
// //	this->m_sittingRoom = "����";
// //	this->m_BedRoom = "����";
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
// //	cout << "�������ڷ���" << building->m_sittingRoom << endl;
// //	cout << "�������ڷ���" << building->m_BedRoom << endl;
// // }
// //
// // void goodGay::visit2()
// //{
// //	cout << "�������ڷ���2" << building->m_sittingRoom << endl;
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
// ////�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
// ////��ʱ�����ĸ���Animal��Ϊ�����
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
// //	system("pause");
// //
// //	return 0;
// //}

#include <string>
#include <iostream>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "Animal ���캯�����ã�" << endl;
    }
    virtual void Speak() = 0;

    // ������������virtual�ؼ��֣��������������
    ~Animal()
    {
        cout << "Animal�������������ã�" << endl;
    }

    /*virtual ~Animal() = 0;*/
};

// Animal::~Animal()
//{
//	cout << "Animal ���������������ã�" << endl;
// }

// �Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat���캯�����ã�" << endl;
        m_Name = new string(name);
    }
    virtual void Speak()
    {
        cout << *m_Name << "Сè��˵��!" << endl;
    }
    ~Cat()
    {
        cout << "Cat������������!" << endl;
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

    // ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
    // ��ô���������������һ������������
    // ���������������������ͨ������ָ���ͷ��������
    delete animal;
}

int main()
{

    test01();

   system("pause");

    return 0;
}

