#include <iostream>

using namespace std;

void message1(){    //void değer döndürmüyor doğrudan ekrana yazdırırlar.
    cout << "Hello There!"<< endl;
}

void message2(char msg2){  //fonk.nu çağırdıığımız zaman parametre veriyoruz 
    cout << msg2 << endl;   
}


void message3(string msg3){
    cout << msg3 << endl;
}

int sum(int num1 , int num2){
    return num1+num2;
}

float division(float num3, float num4){
    return num3/num4;
    
}

int mult(int num1,int num2); //decleration = aşağıda tanımladığımız fonksiyon hakkında bilgi veriyoruz derleme esnasında hata almasın.

//*İşlevi sürekli olarak çağırmanın mantıklı olduğu durumlar için inline kullanmak daha uygundur.
inline int add(int a, int b) {
    return a + b;
}


int main(){
    message1();
    message2('A');
    message3("Learn C++!");
    sum(7,8); //fonksiyonu çağırınca değrei döndürür fakat ekrana yazdırmaz
    cout << sum(7,8) << endl; 
    cout << division(10.0,2.5) << endl;;
    cout << mult(4,6) << endl;
    cout << add(5,10) << endl;
    return 0;
}


int mult(int num1,int num2){  //şağıda tanımladık fakat main'den önce bilgilendirme yaptık
    return num1*num2;
}

// not : C++ ta iç içe fonksiyon yazamıyoruz fakat çağırabiliyoruz.

