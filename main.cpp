#include <iostream>
using namespace std;

int main() {
float p, b, a;
cout << "La giostra parte solo quando presenta 30 persone su di essa" << endl;
p=0;
while (30>p)
{
    cout << "Quanti adulti salgono?" << endl;
    cin >> a;
    cout << "Quanti bambini salgono?" << endl;
    cin >> b;
    p = (b/2+a)+p;
    if (p=29.5)
    {
        p=p+0.5;
    }
}
if (p>30)
{
    cout << "Devono scendere " << p-30 << " persone" << endl;

}
cout << "Sono salite " << p << " persone la giostra può partire" << endl;
}


