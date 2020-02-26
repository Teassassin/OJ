// 1067-查询记录（结构体）
#include <iostream>
#include <cstring>
using namespace std;

typedef struct Student
{
    char num[13];
    char name[21];
    int sub1, sub2, sub3;
}Student;


int main()
{
    int n;
    char num[13];
    Student stu[100];
    while (cin >> n)
    {
        if (n < 1 || n > 100)
            continue;
        for (int i = 0; i < n; i++)
        {
            cin >> stu[i].num >> stu[i].name 
                >> stu[i].sub1 >> stu[i].sub2 >> stu[i].sub3;
        }
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (!strcmp(num, stu[i].num))
            {
                cout << stu[i].num << ' ' << stu[i].name << ' '
                     << stu[i].sub1 << ' ' << stu[i].sub2 << ' ' << stu[i].sub3 << endl;
                break;
            }
        }
    }
    return 0;
}