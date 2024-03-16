#include <iostream>
#include <string>
#include <map>

using namespace std;

// 명령어 정의

enum UserCommand
{
    push_front, // 정수 X를 덱의 앞에 넣는다.
    push_back,  // 정수 X를 덱의 뒤에 넣는다.
    pop_front,  // 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    pop_back,   // 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    size,       // 덱에 들어있는 정수의 개수를 출력한다.
    empty,      // 덱이 비어있으면 1을, 아니면 0을 출력한다.
    front,      // 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    back,       // 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
};

map<string, UserCommand> cmd;
void mapInit(void)
{
    cmd["push_front"] = UserCommand::push_front;
    cmd["push_back"] = UserCommand::push_back;
    cmd["pop_front"] = UserCommand::pop_front;
    cmd["pop_back"] = UserCommand::pop_back;
    cmd["size"] = UserCommand::size;
    cmd["empty"] = UserCommand::empty;
    cmd["front"] = UserCommand::front;
    cmd["back"] = UserCommand::back;
}

// 자료구조 정의
struct Circle
{
    int n = 0;
    Circle *next = nullptr;
    Circle *privious = nullptr;
};

Circle *pipe[2] = {nullptr};

// 명령어 함수
void delCircle(Circle *cir)
{
    Circle *nextPtr;
    Circle *privPtr;

    nextPtr = (*cir).next;
    privPtr = (*cir).privious;

    if (nextPtr != nullptr)
        (*nextPtr).privious = privPtr;

    if (privPtr != nullptr)
        (*privPtr).next = nextPtr;

    if (pipe[0] == cir)
        pipe[0] = nullptr;

    if (pipe[1] == cir)
        pipe[1] = nullptr;

    delete cir;
}

void pushF(int num)
{
    Circle *nc = new Circle;
    Circle *front = pipe[0];

    (*nc).n = num;

    if (front == nullptr)
    {
        pipe[0] = nc;
        pipe[1] = nc;
        return;
    }

    (*nc).next = front;
    (*front).privious = nc;
    pipe[0] = nc;
}
void pushB(int num)
{
    Circle *nc = new Circle;
    Circle *back = pipe[1];

    (*nc).n = num;

    if (back == nullptr)
    {
        pipe[0] = nc;
        pipe[1] = nc;
        return;
    }

    (*nc).privious = back;
    (*back).next = nc;
    pipe[1] = nc;
}

void popF(void)
{
    Circle *front;
    front = pipe[0];
    if (front == nullptr)
    {
        cout << "-1" << '\n';
        return;
    }
    cout << front->n << '\n';
    if ((*front).next != nullptr)
        pipe[0] = (*front).next;

    delCircle(front);
}

void popB(void)
{
    Circle *back;
    back = pipe[1];
    if (back == nullptr)
    {
        cout << "-1" << '\n';
        return;
    }
    cout << back->n << '\n';
    if ((*back).privious != nullptr)
        pipe[1] = (*back).privious;

    delCircle(back);
}

void siz(void)
{
    int count = 1;
    Circle *cur = pipe[0];
    if (cur == nullptr)
    {
        cout << 0 << '\n';
        return;
    }

    while (cur != pipe[1])
    {
        cur = (*cur).next;
        count++;
    }

    cout << count << '\n';
}

void empt(void)
{
    if (pipe[0] == nullptr)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}

void fron(void)
{
    if (pipe[0] == nullptr)
    {
        cout << -1 << '\n';
        return;
    }
    cout << (*pipe[0]).n << '\n';
}

void bac(void)
{
    if (pipe[1] == nullptr)
    {
        cout << -1 << '\n';
        return;
    }
    cout << (*pipe[1]).n << '\n';
}

int main(void)
{
    int num, n;
    string input;
    mapInit();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        switch (cmd[input])
        {
        case UserCommand::push_front:
            cin >> num;
            pushF(num);
            break;
        case UserCommand::push_back:
            cin >> num;
            pushB(num);
            break;
        case UserCommand::pop_front:
            popF();
            break;
        case UserCommand::pop_back:
            popB();
            break;
        case UserCommand::size:
            siz();
            break;
        case UserCommand::empty:
            empt();
            break;
        case UserCommand::front:
            fron();
            break;
        case UserCommand::back:
            bac();
            break;
        default:
            break;
        }
    }
}