// 1068-添加记录（结构体）
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
    int n, insert = 0;                  // insert记录插入位置
    char num[13];
    Student stu[101];
    cin >> n;
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
            cout << "error!" << endl;
            return 0;
        }
        else if (strcmp(num, stu[i].num) > 0)
            insert++;
    }
    for (int i = n; i > insert; i--)
        memcpy(&stu[i], &stu[i - 1], sizeof(Student));
    
    strcpy(stu[insert].num, num);
    cin >> stu[insert].name >> stu[insert].sub1
        >> stu[insert].sub2 >> stu[insert].sub3;
    for (int i = 0; i < n + 1; i++)
    {
        cout << stu[i].num << ' ' << stu[i].name << ' '
             << stu[i].sub1 << ' ' << stu[i].sub2 << ' ' << stu[i].sub3 << endl;
    }
    return 0;
}
