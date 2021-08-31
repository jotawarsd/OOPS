#include <iostream>
using namespace std;

class complex
{
    public:
    int x, y;
    complex()
    {
        x = 0;
        y = 0;
        
    }

    friend void operator >>(complex &u, complex &v)
    {
        cout<< "Enter real value of first number:";
        cin>> u.x;
        cout<< "Enter imaginary value of first number:";
        cin>> u.y;

        cout<< "Enter real value of second number:";
        cin>> v.x;
        cout<< "Enter imaginary value of second number:";
        cin>> v.y;

    }

    friend void operator <<(complex &u, complex&v)
    {
        if(u.y == 1)
        {
            cout<< "First complex number is "<< u.x<< "+"<< "i"<< endl;
            cout<< "Second complex number is "<< v.x<< "+"<< "i"<< endl;
        }
        else
        {
            cout<< "First complex number is "<< u.x<< "+"<< u.y<< "i"<< endl;
            cout<< "Second complex number is "<< v.x<< "+"<< v.y<< "i"<< endl;
        }

    }

    friend void operator +(complex &u, complex &v)
    {
        complex add;
        add.x = u.x + v.x;
        add.y = u.y + v.y;

        if (add.y > 0)
            cout<< "addition of complex numbers: "<< add.x<< "+"<< abs(add.y)<< "i"<< endl;
        else
            cout<< "addition of complex numbers: "<< add.x<< "-"<< abs(add.y)<< "i"<< endl;
            
    }

    friend void operator -(complex &u, complex &v)
    {
        complex subtract;
        subtract.x = u.x - v.x;
        subtract.y = u.y - v.y;

        if (subtract.y > 0)
            cout<< "subtraction of complex numbers: "<< subtract.x<< "-"<< abs(subtract.y)<< "i"<< endl;
        else
            cout<< "subtraction of complex numbers: "<< subtract.x<< "+"<< abs(subtract.y)<< "i"<< endl;
    }

    friend void operator *(complex &u, complex &v)
    {
        complex mul;
        mul.x = u.x*v.x - u.y*v.y;
        mul.y = u.x*v.y + u.y*v.x;

        if (mul.y > 0)
            cout<< "multiplication of complex numbers: "<< mul.x<< "-"<< mul.y<< "i"<< endl;
        else
            cout<< "multiplication of complex numbers: "<< mul.x<< "+"<< mul.y<< "i"<< endl;
    }
};

int main ()
{
    char ch;
    char des = 'y';
    int i;

    complex s1, s2;
    operator >>(s1, s2);
    operator <<(s1, s2);

    do
    {
        cout<< "choose operation"<< endl;
        cout<< "(+)addition"<< endl;
        cout<< "(-)subtraction"<< endl;
        cout<< "(*)multiplication"<< endl;
        cin >> ch;
        switch(ch)
        {
            case '+':
                operator +(s1,s2);
                break;
            case '-':
                operator -(s1,s2);
                break;
            case '*':
                operator *(s1,s2);
                break;
            default:
                cout<< "invalid operation!"<< endl;
                printf("\n");
                break;
        }
        cout<< "do you want to repeat this operation? (y/n): ";
        cin>> des;
    }
    while((des == 'y') || (des == 'Y'));
    
}