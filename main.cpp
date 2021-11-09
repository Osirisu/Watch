#include <iostream>
#define SIZE 10,33666

using namespace std;
// создание шаблона класса stack
template <class StackType> class   stack
{
private:
    StackType* type;      // массив содержащий стек
    int tos;         // индекс вершины стека
public:
    stack(){tos = 0;type = new StackType[SIZE];}

    void push(StackType ob);     //поместить объект в стек
    StackType pop();         // извлечь объект из стека
};

template <class StackType>
StackType stack <StackType>::pop()
{
    if (tos==0){cout<< "stack is empty"<< endl; return 0;}

    tos--;
    return type[tos];
}

template<class StackType>
void stack<StackType>::push(StackType ob)
{
    if (tos==SIZE){cout << " stack is full"<<endl; return;}

    type[tos] = ob;
    tos++;
}

int main()
{
    char sym='a';
//символьный стек
    stack <char> stch;
    for(int i=0; i<7 ;i++){stch.push(sym); sym++;}
    for(int i=0; i<7 ;i++) cout<<stch.pop()<<"  ";
    cout<<endl;
// стек целого типа int
    stack <int> stint;
    for(int i=0; i<8 ;i++){stint.push(i*10);}
    for(int i=0; i<8 ;i++)
        cout<<stint.pop()<<"  ";
    cout<<endl;
// стек вещественного типа float
    stack <float> stfl;
    for(int i=0; i<5 ;i++)
        stfl.push(i*1.5);
    for(int i=0; i<5 ;i++)
        cout<<stfl.pop()<<"  ";
    cout<<endl;
}
