#include <iostream>
using namespace std;

static int num = 0;
static int end = 0;

void func_recursive(int a)
{
    if (a <= 0)
        return ;
    for (int a = num; a > 0; a--)
        cout << "____";
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    
    for (int a = num; a > 0; a--)
        cout << "____";
    cout << "____\"재귀함수가 뭔가요?\"\n";

    if (a != 1)
    {
        for (int a = num; a > 0; a--)
            cout << "____";
        cout << "____\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
        for (int a = num; a > 0; a--)
            cout << "____";
        cout << "____마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    }

    if (a == 1)
    {
        for (int a = num; a > 0; a--)
            cout << "____";
        cout << "____\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
    }

    num++;
    return func_recursive(a - 1);
}

void func_end(int a)
{
    if (a <= 0)
        return ;
    
    for (int i = a; i > 0; i--)
        cout << "____";
    cout << "라고 답변하였지.\n";

    return func_end(a - 1);
}

int main()
{
    int a;
    cin >> a;
    // 첫 질문
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다. \n\"재귀함수가 뭔가요?\"\n";
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    // 반복 진행
    func_recursive(a);
    func_end(a);
    cout << "라고 답변하였지.";
}