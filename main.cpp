#include <iostream>
using namespace std;
#include <vector>

enum ATM{
    balnace,
    deposite,
    withdraw
};

struct student
{
    student():name(""),score(0),status(false) {} // Assign default data
    string name;
    int score;
    bool status;
};


void Hello(){
    cout << "Hello AI\n"<< endl;
}

void avrialble(){
    string name = "Tanawin";

    float score = 80.5;

    int num1 = 100;
    int num2 = 200;
    int num3 = 300;

    const float PI = 3.14;

    bool status = true;

    char grade = 'A';

    cout << "Name : "<< name << endl;
    cout << "Score : "<< score << endl;
    cout << "Num1 : "<< num1 << endl;
    cout << "Status : " << status << endl;
    cout << "Grade : " << grade << endl;
    cout << "Pi : " << PI << endl;
}

void math_op(){
    float a = 10.0, b = 3.2;

    cout << "a = " << a << " b = " << b << endl;
    cout << "Add : " << a+b << endl;
    cout << "Sub : " << a-b << endl;
    cout << "Mul : " << a*b << endl;
    cout << "Div : " << a/b << endl;
}

void up_down(){
    int a1 = 1, a2 =1;
    int b1 = 1, b2 = 1;
    cout << "++a : " << ++a1 << endl;
    cout << "a++ : " << a2++ << endl;
    cout << "--b : " << --b1 << endl;
    cout << "b-- : " << b2-- << endl;
}

void compound_ass(){
    int x = 100, y = 50;
    int x1  = x+=y;
    int x2  = x-=y;
    int x3  = x*=y;
    int x4  = x/=y;
    int x5  = x%=3;
    cout << "x + = " << x1 << endl;
    cout << "x - = " << x2 << endl;
    cout << "x * = " << x3 << endl;
    cout << "x / = " << x4 << endl;
    cout << "x % = " << x5 << endl;
}

void operator_5 (){

    int x = 5;
    bool result = x > 2000;
    cout << "Result : " << result << endl;
    if (!result != 0 && result == 0){
        cout << "x is lower" << endl;
    }
    else{
        cout << "x is upper" << endl;
    }

    if (x > 2){
        cout << "x > 2" << endl;
    }
    else{
        cout << "x < 2" << endl;
    }
}

void input_op(){

    int num1,num2;
    cout <<  "Input num1 : " ;
    cin >> num1;
    cout <<  "Input num2 : " ;
    cin >> num2;
    if (num1 == 0 && num2 == 0 ){
        cout << "Please input nimber";
    }
    else{
        cout << "Result : num1 + num2 = " << num1+num2 << endl;
    }
}

void condition(){
    int num;
    cout << "Plase input number : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "It is 1\n";
        break;
    case 2:
        cout << "It is 2\n";
        break;
    case 3:
        cout << "It is 3\n";
        break;
    
    default:
        cout << "Input is Error\n";
        break;
    }
}

void tid_loop(){
    int sum = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i<=10; i++){
        cout << i << ", ";
        if (i == 6){
            continue;
        }
        else if(i == 7){
            break;
        }
    }
    cout << "end for loop\n";

    while (j<=15)
    {
        cout << j << ", ";
        j++;
    }
    cout << "end while loop\n";

    do{
        cout << k << ", ";
        k++;   
        sum+=k;     
    }while (k<=20);
    cout << "end do while loop\n";
    cout << "sum value : " << sum << endl;
}

void basic_array(){
    int score[3] = {100,90,80}; // Assign size off array
    char grade[5] = {'A','B','C','D','F'}; 
    float dataa[] = {3.14,2.214,3.98};
    int size = sizeof(score) / sizeof(score[0]);
    cout << "size of int : " << sizeof(score[0]) << endl;
    cout << "size of float : " << sizeof(dataa[0]) << endl;
    cout << "size of char : " << sizeof(grade[0]) << endl;
    cout << "size of array : " << size << endl;
    for(int i=0; i<size; i++){
        // cout << score[i] << ",";
        if (score[i] == 100){
            score[i] = 788;
        }
        cout << score[i] << ",";
    }
    cout << "End for loop" << endl;
    int total = 0;
    // foreach
    for (int i : score){
        cout << i << endl;
        total+=i;
    }
    cout << "End foreach loop int" << endl;
    cout << "Total int : " << total << endl;
    for (char i : grade){
        cout << i << endl;
    }
    cout << "End foreach loop char" << endl;
    for (float i : dataa){
        cout << i << endl;
    }
    cout << "End foreach loop float" << endl;
}

void cal_array(){ 
    int number[3];
    int sum = 0;
    int size = sizeof(number)/sizeof(number[0]);
    
    for(int i=0; i<size; i++){
        cout << "Input number "<< i << " : ";
        cin >> number[i];
        sum += number[i];
    }
    cout << "Total : " << sum << endl;
    cout << "End Program" << endl;
}

void twoD_array(){
    int arr[3][2] = {
        {70,80},
        {90,100},
        {76,65}
    };
    cout << arr[0][1] << endl;
    cout << arr[0][0] << endl;

    // Get the number of rows and columns in the array
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "size of rows : " << rows << endl;
    cout << "size of cols : " << cols << endl;
    // Loop through the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ","; // Print the current element
        }
        cout << endl; // Move to the next row
    }
    cout << "End Nested Basic" << endl;

    for (int i=1;i<=3;i++){
        cout << "Table : " << i << endl;
        for (int j=1; j<=12; j++){
            // cout <<  j << endl;
            cout << i << " X " << j << " : " << i*j << endl;
        }
    }
    cout << "End Nested Mul Table" << endl;
}

int add(int a,int b){
    return a+b;
}

int add(int a,int b, int c){
    return a+b+c;
}

float sub(float a,float b){
    return a-b;
}

float mul(float a,float b){
    return a*b;
}
float div_math(float a,float b){
    return a/b;
}

int power(int base, int pow){

    int sum = 0;
    for(int i=1; i<=pow; i++){
        sum = base*i;
    }
    return sum;
}

void call_pFunction(){
    cout << "Call ADD Func : " << add(2,3) << endl;
    cout << "Call ADD Overload Func : " << add(2,3,4) << endl;
    cout << "Call SUB Func : " << sub(2,3) << endl;
    cout << "Call MUL Func : " << mul(2,3) << endl;
    cout << "Call DIV Func : " << div_math(8,3) << endl;
    cout << "Call Power Func : " << power(2,4) << endl;
}

void pPointer(){
    int num = 10;
    int *p1 = &num;
    cout << "Address Pointer : " << p1 << endl;
    cout << "Value Pointer : " << *p1 << endl;
    *p1 = 500;
    cout << "Address Pointer change : " << p1 << endl;
    cout << "Value Pointer change : " << *p1 << endl;
}

void mString(){
    string name = "Tanawin";
    cout << name[0] << endl;
    cout << name.length() << endl;

    string last = "Siriwan";
    string fullname = name+" "+last;
    cout << name+" "+last << endl;
    cout << name.append(" "+last) << endl;
    if (fullname.empty() == 0){
        cout << "Hello" << endl;
    }
    else {
        cout << "What is it" << endl;
    }

    string user = "admin";
    string admin = "Xadmin";
    if(user == admin){
        cout << "Succes" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
}

void eEnum(){
    ATM choise = balnace;
    // count << " You Selected : " << choise << endl;
}

void vVector(){
    // Dynamic array
    vector<int> score = {100,90,80};
    score.push_back(70);
    cout << score.at(0) << endl;
    cout << "Size of vector : " << score.size() << endl;
    for (int i=0; i<score.size(); i++){
        cout << score[i] << ",";
    }
}

void sStructure(){
    student s1;
    s1.name = "Tanawin";
    s1.score = 99;
    s1.status = true;
    cout << s1.name << endl;
    cout << s1.score << endl;
    cout << s1.status << endl;
}

template<class T, class U>
T findMaxT(T a, U b){
    if(a > b)
    {
        return a;
    }
    else{
        return b;
    }

}

// int findMax(int a, int b){
//     if(a > b)
//     {
//         return a;
//     }
//     else{
//         return b;
//     }

// }

// int findMax(float a, float b){
//     if(a > b)
//     {
//         return a;
//     }
//     else{
//         return b;
//     }

// }

void callFindMax(){
    cout << "find Max Value : " << findMaxT(10.9,20) << endl;
}

int main(int, char**) {
    // Hello();
    // avrialble();
    // math_op();
    // up_down();
    // compound_ass();
    // operator_5();
    // input_op();
    // condition();
    // tid_loop();
    // basic_array();
    // cal_array();
    // twoD_array();
    // cout << "Call Add Func : " << add(2,3) << endl;
    // call_pFunction();
    // pPointer();
    // mString();
    // vVector();
    // sStructure();
    callFindMax();
    return 0;
}
