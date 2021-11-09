#include <iostream.h>
#include <conio.h>
#define SIZE 10
// создание шаблона класса stack
template <class StackType> class   stack
{
    StackType stck[SIZE];       // массив  содержащий стек
    int tos;         // индекс вершины стека
public:
    void init(){tos=0;}          // инициализация стека
    void push(StackType ob);     //поместить объект в стек
    StackType    pop();         // извлечь объект из стека
};
template <class StackType>
void stack <class StackType>:: push(StackType ob)
{if (tos==SIZE){cout << " stack is full"<<endl; return;}
    stck[tos]=ob; tos++;
}
template <class StackType>
StackType stack <class StackType>::pop()
{if (tos==0){cout<< "stack is empty"<< endl; return 0;}
    tos--;
    return stck[tos];
}
void main()
{clrscr();
    int i;
    char sym='a';
//символьный стек
    stack <char> stch;
    stch.init();
    for(i=0; i<7 ;i++){stch.push(sym); sym++;}
    for(i=0; i<7 ;i++) cout<<stch.pop()<<"  ";
    cout<<endl;
// стек целого типа  int
    stack <int> stint;
    stint.init();
    for(i=0; i<8 ;i++){stint.push(i*10); sym++;}
    for(i=0; i<8 ;i++) cout<<stint.pop()<<"  ";
    cout<<endl;
// стек вещественного типа  float
    stack <float> stfl;
    stfl.init();
    for(i=0; i<5 ;i++) stfl.push(i*2);
    for(i=0; i<5 ;i++) cout<<stfl.pop()<<"  ";
    cout<<endl;
    getch();
}
