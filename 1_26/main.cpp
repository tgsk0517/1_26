#include<stdio.h>
#include <list>
#include <vector>


//����
//class Point
//{
//public:
//	Point()
//	{
//		printf("�R���X�g���N�^\n");
//	}
//
//	~Point()
//	{
//		printf("�f�X�g���N�^\n");
//	}
//
//
//private:
//	int x;
//	int y;
//};


//����
//int main()
//{
    //int* num = new int;
    //char* tx = new char[100];
    //
    //delete num;
    //num = nullptr;
    //delete tx;
    //tx = nullptr;

//}


//��O��
//class Test
//{
//public:
//    Test()
//    {
//        printf("Test\n");
//    }
//    virtual ~Test()
//    {
//        printf("~Test\n");
//    }
//};
//
//class Test2 : public Test
//{
//public:
//    Test2()
//    {
//        printf("Test2\n");
//    }
//    ~Test2()
//    {
//        printf("~Test2\n");
//    }
//};
//
//int main()
//{
//    Test* t;
//    t = new Test2();
//
//    delete t;
//    return 0;
//}


//��l��
//template <typename T>
//T Calc(float a, float b, int type)
//{
//    float ans = 0;
//    switch (type)
//    {
//    case 0:
//        ans = a + b;
//        break;
//    case 1:
//        ans = a - b;
//        break;
//    case 2:
//        ans = a * b;
//        break;
//    case 3:
//        ans = a / b;
//        break;
//    }
//
//    return ans;
//}
//
//int main()
//{
//    int ans1;
//    float ans2;
//    char ans3;
//
//    ans1 = Calc<int>(2, 5, 0);
//    ans2 = Calc<float>(10.0f, 2.5f, 3);
//    ans3 = Calc<char>(10, 4, 2);
//
//    return 0;
//}


//��ܖ�
//int main()
//{
//    std::list<int> lst;
//    for (int i = 0; i < 5; ++i)
//    {
//        // �����Ƀv���O�������L�q
//        lst.push_back(50 - (i * 10));
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//
//    }
//
//    // ���X�g���C������num=30�ƕ\�������悤�Ƀv���O�������L�q
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); it != lst.end())
//    {
//
//        if (*it != 30)
//        {
//            it = lst.erase(it);
//        }
//        else
//        {
//            it++;
//        }
//
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//    }
//}

//��Z��
//int main()
//{
//    std::vector<int> lst;
//    for (int i = 0; i < 5; ++i)
//    {
//        // �����Ƀv���O�������L�q
//        lst.push_back(50 - (i * 10));
//    }
//
//    for (std::vector<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//
//    }
//
//    // ���X�g���C������num=30�ƕ\�������悤�Ƀv���O�������L�q
//    for (std::vector<int>::const_iterator it = lst.begin(); it != lst.end(); it != lst.end())
//    {
//
//        if (*it != 30)
//        {
//            it = lst.erase(it);
//        }
//        else
//        {
//            it++;
//        }
//
//    }
//
//    for (std::vector<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//    }
//
//}