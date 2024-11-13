/// ---------------------- ( Course 4 ) ------------------------
// Problem 1 (Print your name)
/*
#include <iostream>
#include <string>

using namespace std;

void PrintName(string Name){
    cout << "\n Your Name is: " << Name << endl;
}

int main(){
    PrintName("Ammar");
}
 */
// Problem 2 (Read Name and Print it)
/*
#include <iostream>
#include <string>

using namespace std;

string ReadName(){
    string Name;
    cout << "Enter Your Name : " << endl;
    getline(cin, Name);
    return Name;
}
void PrintName(string Name){
    cout << "\nYour Name is : " << Name << endl;
}

int main(){
    PrintName(ReadName());
    return 0;
}
 */
// Problem 3 (Check Odd or Even)
/*
#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd=1, Even=2 };

int ReadNumber(){
    int Num;

    cout << "Please enter a number? " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num){
    int Result = Num % 2;
    if (Result == 0){
        return enNumberType::Even;
    }
    else{
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType NumberType){
    if (NumberType == enNumberType::Even){
        cout << "The Number is Even. " << endl;
    }
    else {
        cout << "The Number is Even. " << endl;
    }
}

int main(){
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
*/
// Problem #4 (Hire a driver Case 1)
/*
#include <iostream>
using namespace std;

struct stInfo {
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo(){
    stInfo Info;

    cout << "Please Enter Your Age? " << endl;
    cin >> Info.Age;

    cout << "Do you have driver License? " << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool IsAccepted(stInfo Info){
    return (Info.HasDrivingLicense&&Info.Age>21);
}

void PrintResult(stInfo Info){
    if (IsAccepted(Info)){
        cout << "\n Hired" << endl;
    }
    else {
        cout << "\n Rejected" << endl;
    }
}

int main(){
    PrintResult(ReadInfo());

    return 0;
}
 */
// Problem #5 (Hire a driver Case 2)
/*
#include <iostream>
using namespace std;

struct stInfo{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stInfo ReadInfo(){
    stInfo Info;

    cout << "Do you have a Recommendation? : " << endl;
    cin >> Info.HasRecommendation;

    if (Info.HasRecommendation){return Info;}

    cout << "Enter Your Age : " << endl;
    cin >> Info.Age;

    cout << "Do you have a driver license? : " << endl;
    cin >> Info.HasDriverLicense;

    return Info;
}

bool IsAccepted(stInfo Info){
    return (Info.HasRecommendation || (Info.Age && Info.HasDriverLicense));
}

void PrintInfo(stInfo Info){
    if (IsAccepted(Info)){
        cout << "Hired" << endl;
    }
    else {
        cout << "Rejected" << endl;
    }
}

int main(){
    PrintInfo(ReadInfo());
    return 0;
}
*/
// Problem #6 ( Print FullName )
/*
#include <iostream>
using namespace std;

struct stFullName{
    string FirstName;
    string LastName;
};

stFullName ReadInfo(){
    stFullName Info;
    cout << "Enter FirstName : " << endl;
    cin >> Info.FirstName;

    cout << "Enter LastName : " << endl;
    cin >> Info.LastName;

    return Info;
}

string MakeFullName(stFullName Info){
    return (Info.FirstName + " " + Info.LastName);
}

void PrintFullName(string FullName){
    cout << FullName << endl;
}

int main(){
    PrintFullName(MakeFullName(ReadInfo()));
    return 0;
}
 */
// Problem #7 ( Half Number )
/*
#include <iostream>
using namespace std;

float ReadNumber(){
    float Num;
    cout << "Enter a number to get the half : " << endl;
    cin >> Num;
    return Num;
}

float CalculateTheHalf(float Num){
    return Num/2;
}

void PrintResults(float Num){
    cout << "The Half of " << Num << " is " << CalculateTheHalf(Num) << endl << endl;
}

int main(){
    PrintResults(ReadNumber());
    return 0;
}
 */
// Problem #8 ( Mark Pass Fail )
/*
#include <iostream>
using namespace std;

enum enPassFail{ Pass = 1, Fail = 2};

int ReadMark(){
    int Mark;
    cout << "Enter the Mark : " << endl;
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int Mark){
    if (Mark >= 50){
        return enPassFail::Pass;
    }
    else {
        return enPassFail::Fail;
    }
}

void PrintResult(int Mark){
    if (CheckMark(Mark) == enPassFail::Pass){
        cout << "\n You passed" << endl;
    }
    else{
        cout << "\n You Failed" << endl;
    }
}

int main(){
    PrintResult(ReadMark());
    return 0;
}
*/
// Problem #9 (Sum of 3 Numbers)
/* My Project
#include <iostream>
using namespace std;

int NumbersAmount = 3;

void ReadNums(int Arr[100]){

    for (int i = 1; i <= NumbersAmount; i++){
        cout << "Enter Number (" << i << "): " << endl;
        cin >> Arr[i-1];
    }

}

int NumbersSum(int Arr[100]){
    int Sum = 0;
    for(int i = 1; i <= NumbersAmount; i++){
        Sum += Arr[i-1];
    }
    return Sum;
}

void PrintSum(int Sum){
    cout << "___________________________" << endl;
    cout << "The Sum of your Numbers : "<< Sum << endl;
}

int main(){
    int Arr[NumbersAmount];
    ReadNums(Arr);
    PrintSum(NumbersSum(Arr));
    return 0;
}
 */
/*
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3){
    cout << "Please enter your Number 1 ? " << endl;
    cin >> Num1;

    cout << "Please enter your Number 2 ? " << endl;
    cin >> Num2;

    cout << "Please enter your Number 3 ? " << endl;
    cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3){
    return Num1 + Num2 + Num3;
}

void PrintResults(int Total){
    cout << "\n The total sum of numbers is: " << Total << endl;
}

int main(){
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(SumOf3Numbers(Num1, Num2, Num3));
    return 0;
}
 */
// Problem #10 ( Average Of 3 Mark )
/*
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3){
    cout << "Enter Number 1 Please : " << endl;
    cin >> Num1;
    cout << "Enter Number 2 Please : " << endl;
    cin >> Num2;
    cout << "Enter Number 3 Please : " << endl;
    cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3){
    return Num1 + Num2 + Num3;
}

void PrintResults(float Average){
    cout << "\n The Average of Sum is : " << Average << endl;
}

float GetAverage(int Mark1,int Mark2,int Mark3){
    return (float) SumOf3Numbers(Mark1, Mark2, Mark3)/3;
}

int main(){
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(GetAverage(Num1, Num2, Num3));
    return 0;
}
 */
// Problem #11 ( Average Pass/Fail )
/*
#include <iostream>
using namespace std;

enum enPassFail {Pass =1, Fail = 2};

void ReadNumbers (int& Num1, int& Num2, int& Num3) {
    cout << "Enter Number 1 Please : " << endl;
    cin >> Num1;
    cout << "Enter Number 2 Please : " << endl;
    cin >> Num2;
    cout << "Enter Number 3 Please : " << endl;
    cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3) {
    return Num1+Num2+Num3;
}

float GetAverage(int Mark1, int Mark2, int Mark3) {
    return (float) SumOf3Numbers(Mark1, Mark2, Mark3)/3;
}

enPassFail CheckIfPass(float Avg) {
    if (Avg >= 50) {
        return enPassFail::Pass;
    }
    else {
        return enPassFail::Fail;
    }
}

void PrintResult(float Avg) {
    cout << "___________________________" << endl;
    cout << "The Average is : " << Avg << endl;
    cout << "___________________________" << endl;
    if (CheckIfPass(Avg) == enPassFail::Pass) {
        cout << "Pass!!" << endl;
    }
    else {
        cout << "Failed!!" << endl;
    }
}

int main() {
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(GetAverage(Num1, Num2, Num3));
    return 0;
}
*/
// Problem #12 ( Max of Two Numbers )
/*
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2) {
    cout << "Please enter Number 1 ? :" << endl;
    cin >> Num1;
    cout << "Please enter Number 2 ? :" << endl;
    cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2) {
    if (Num1 > Num2) {
        return Num1;
    }
    else {
        return Num2;
    }
}

void PrintResult(int Max) {
    cout << "________________________" << endl;
    cout << "The Max Result is : " << Max << endl;
}
int main() {
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(MaxOf2Numbers(Num1, Num2));
    return 0;
}
*/
// Problem #13 ( Max Of Three Numbers )
/*
#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3) {
    cout << "Enter Number 1 : " << endl;
    cin >> Num1;
    cout << "Enter Number 2 : " << endl;
    cin >> Num2;
    cout << "Enter Number 3 : " << endl;
    cin >> Num3;
}

int GetMaxNumber(int Num1, int Num2, int Num3) {
    if (Num1 > Num2) {
        if (Num1 > Num3) {
            return Num1;
        }
        else {
            return Num3;
        }
    }
    else {
        if (Num2 > Num3) {
            return Num2;
        }
        else {
            return Num3;
        }
    }
}

void PrintResults(int Max) {
    cout << "________________" << endl;
    cout << "The Maximum number is : " << Max << endl;
}

int main() {
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResults(GetMaxNumber(Num1, Num2, Num3));
    return 0;
}
*/
// Problem #14 ( Swap Two Numbers )
/*
#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2) {
    cout << "Enter the Number 1 : " << endl;
    cin >> Num1;
    cout << "Enter the Number 2 : " << endl;
    cin >> Num2;
}

void SwapNumbers(int &Num1, int &Num2) {
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintNumbers(int Num1, int Num2) {
    cout << "Num1 = " << Num1 << endl;
    cout << "Num2 = " << Num2 << endl;
    cout << "___________________" << endl;
}

int main() {
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    SwapNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    return 0;
}
*/
// Problem #15 ( Rectangle Area )
/*
#include <iostream>
using namespace std;

void ReadNumbers(float& Num1, float& Num2) {
    cout << "Enter the a side : " << endl;
    cin >> Num1;
    cout << "Enter the b side : " << endl;
    cin >> Num2;
}

float CalculateRectangleArea(float A, float B) {
    return A*B;
}

void PrintResult(float Area) {
    cout << "Rectangle area is : " << Area << endl;
}
int main() {
    float Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(CalculateRectangleArea(Num1, Num2));

    return 0;
}
*/
// Problem #16 ( Rectangle Area By Diagonal & Side )
/*
#include <iostream>
#include <cmath>
using namespace std;

void ReadNums(float &a, float &d) {
    cout << "Enter the Side : " << endl;
    cin >> a;
    cout << "Enter the Diagonal : " << endl;
    cin >> d;
}
float CalculateRectangleArea(float a, float d) {
    return a * sqrt(pow(d, 2)-pow(a, 2));
}

void PrintResult(float Area) {
    cout << "Rectangle area is : " << Area << endl;
}

int main() {
    float a, d;
    ReadNums(a, d);
    PrintResult(CalculateRectangleArea(a, d));
    return 0;
}
*/
// Problem #17 ( Triangle Area )
/*
#include <iostream>
using namespace std;

void ReadNums(float& a, float& h) {
    cout << "Enter The height of the Triangle: " << endl;
    cin >> h;
    cout << "Enter the Base of the Triangle : " << endl;
    cin >> a;
}
float CalculateTriangleArea(float a, float h) {
    return a*h/2;
}
void PrintResult(float Area) {
    cout << "Triangle area is : " << Area << endl;
    cout << "_________________________________" << endl;
}
int main() {
    float a, h;
    ReadNums(a, h);
    PrintResult(CalculateTriangleArea(a, h));

    return 0;
}
*/
// Problem #18 ( Circle Area )
/*
#include <iostream>
#include <cmath>
using namespace std;

void ReadNums(float& r) {
    cout << "Enter the radios of the circle : " << endl;
    cin >> r;
}

float CalclulateCircleArea(float r) {
    const float Pi = 3.14;
    return (Pi * pow(r, 2));
}

void PrintResult(float Area) {
    cout << "Circle area is : " << Area << endl;
}

int main() {
    float r;
    ReadNums(r);
    PrintResult(CalclulateCircleArea(r));

    return 0;
}
*/
// Problem #19 ( Circle Area By diameter )
/*
#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter(float D) {
    cout << "Enter The Diameter : " << endl;
    cin >> D;
    return D;
}

float CalculateCircleArea(float D) {
    const float Pi = 3.14;
    float Area = Pi * pow(D, 2)/4;
    return Area;
}

void PrintResults(float Area) {
    cout << "The Circle area is : " << Area << endl;
}

int main() {
    float D;
    PrintResults(CalculateCircleArea(ReadDiameter(D)));
    return 0;
}
*/
// Problem #20 ( Circle Area Inscribed in a Square )
/*
#include <iostream>
#include <cmath>

using namespace std;

float ReadSquare() {
    float A;
    cout << "Enter a Side of the Square : " << endl;
    cin >> A;
    return A;
}

float CalculateCircleArea(float A) {
    const float Pi = 3.14;
    float Area = Pi * pow(A, 2)/4;
    return Area;
}

void PrintResults(float Area) {
    cout << "Circle Area is : " << Area << endl;
}

int main() {
    PrintResults(CalculateCircleArea(ReadSquare()));

    return 0;
}
*/
// Problem #21 ( Circle Area Along the Circumference )
/*
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumbers() {
    float l;
    cout << "Enter the circumference : " << endl;
    cin >> l;
    return l;
}

float CalculateCircleArea(float l) {
    const float Pi = 3.14;
    float Area = pow(l, 2)/(4 * Pi);
    return Area;
}

void PrintResults(float Area) {
    cout << "_________________" << endl;
    cout << "Circle Area is : " << Area << endl;
}

int main() {
    PrintResults(CalculateCircleArea(ReadNumbers()));

    return 0;
}
*/
// Problem #22 ( Circle Area Inscribed in an Isosceles Triangle )
/*
#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& a, float& b) {
    cout << "Enter The a : " << endl;
    cin >> a;
    cout << "Enter the b : " << endl;
    cin >> b;
}

float CalculateCircleArea(float a, float b) {
    const float Pi = 3.14;
    float Area = Pi * (pow(b, 2)/4) * ((2*a-b)/(2*a+b));
    return Area;
}

void PrintResults(float Area) {
    cout << "Circle area is : " << Area << endl;
}

int main() {
    float a, b;
    ReadNumbers(a,b);
    PrintResults(CalculateCircleArea(a, b));

    return 0;
}
*/
// Problem #23 ( Circle Area Described Around an Arbitrary Triangle )
/*
#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& a, float& b, float& c) {
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter c : " << endl;
    cin >> c;
}

float CalculateCircleArea(float a, float b, float c) {
    const float Pi = 3.14;
    float P = (a + b + c)/2;
    float T = (a*b*c/(4*sqrt(P*(P-a)*(P-b)*(P-c))));
    float Area = Pi * pow( T, 2);
    return Area;
}

void PrintResult(float Area) {
    cout << "Circle area is : " << Area << endl;
}

int main() {
    float a, b, c;
    ReadNumbers(a, b, c);
    PrintResult(CalculateCircleArea(a, b, c));

    return 0;
}
*/
// Problem #24 ( Validate Age Between 18 and 45 )
/*
#include <iostream>
using namespace std;

int ReadAge() {
    int Age;
    cout << "Enter Your age : " << endl;
    cin >> Age;
    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {
    return (Number >= From && Number <= To);
}

void PrintResult(int Age) {
    cout << "Age is : " << Age << endl;
    cout << "__________________________" << endl;
    if (ValidateNumberInRange(Age, 18, 45)) {
        cout << "Valid Age!" << endl;
    }
    else {
        cout << "Invaid Age! " << endl;
    }
}

int main() {
    PrintResult(ReadAge());

    return 0;
}
*/
// Problem #25 ( Read Unitl Age is Between 18 and 45 )
/*
#include <iostream>
using namespace std;

int ReadAge() {
    int Age;
    cout << "Enter Your age (18, 45):" << endl;
    cin >> Age;
    return Age;
}

int ValidateNumberInRange(int Number, int From, int To) {
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To) {
    int Age;

    do {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}


void PrintResult(int Age) {
    cout << "Age is : " << Age << endl;

    cout << "Valid Age !" << endl;
}

int main() {
    PrintResult(ReadUntilAgeBetween(18, 45));
}
*/
// Problem #26 ( Print Numbers from 1 to N )
/*
#include <iostream>
using namespace std;

int ReadN() {
    int N;
    cout << "Enter the N : " <<  endl;
    cin >> N;
    return N;
}

void PrintRangeFrom1toN_UsingForLoop(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << endl;
    }
}

void PrintRangeFrom1toN_UsingWhileLoop(int N) {
    int i = 0;
    while (i < N) {
        i++;
        cout << i << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhileLoop(int N) {
    int i = 0;
    do {
        i++;
        cout << i << endl;
    } while( i < N );
}

int main() {
    int N = ReadN();
    PrintRangeFrom1toN_UsingForLoop(N);
    cout << "____________________" << endl;
    PrintRangeFrom1toN_UsingWhileLoop(N);
    cout << "____________________" << endl;
    PrintRangeFrom1toN_UsingDoWhileLoop(N);

    return 0;
}
*/
// Problem #27 ( Print Numbers from N to 1 )
/*
#include <iostream>
using namespace std;

int ReadN() {
    int N;
    cout << "Enter the N : " << endl;
    cin >> N;
    return N;
}

void PrintRangeFromNto1_UsingForLoop(int N) {
    for (int i = N; i >= 1; i--) {
        cout << i << endl;
    }
}

void PrintRangeFromNto1_UsingWhileLoop(int N) {
    int i = N+1;
    while (i > 1) {
        i--;
        cout << i << endl;
    }
}

void PrintRangeFromNto1_UsingDoWhileLoop(int N) {
    int i = N+1;
    do {
        i--;
        cout << i << endl;
    } while (i > 1);
}
int main() {
    int N = ReadN();
    cout << "###\n" << endl;
    PrintRangeFromNto1_UsingForLoop(N);
    cout << "____________________________" << endl;
    PrintRangeFromNto1_UsingWhileLoop(N);
    cout << "____________________________" << endl;
    PrintRangeFromNto1_UsingDoWhileLoop(N);

    return 0;
}
*/
// Problem #28 ( Sum Odd Numbers from 1 to N )
/*
#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2};

int ReadN() {
    int N;
    cout << "Enter The N : " << endl;
    cin >> N;
    return N;
}

enOddOrEven CheckOddOrEven(int i) {
    if (i % 2 == 0) {
        return enOddOrEven::Even;
    }
    else {
        return enOddOrEven::Odd;
    }
}

int SumOddNumbersFrom1toN_UsingForLoop(int N) {
    int Sum = 0;

    for (int i = 1; i <= N; i++) {
        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            Sum += i;
        }
    }
    return Sum;
}

int SumOddNumbersFrom1toN_UsingWhileLoop(int N) {
    int Sum = 0;
    int i = 0;
    while (i < N) {
        i++;
        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            Sum += i;
        }
    }
    return Sum;
}

int SumOddNumbersFrom1toN_UsingDoWhileLoop(int N) {
    int Sum = 0;
    int i = 0;
    do {
        i++;
        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            Sum += i;
        }
    } while (i < N);
    return Sum;
}

int main() {
    int N = ReadN();
    cout << "###\n";
    cout << SumOddNumbersFrom1toN_UsingForLoop(N) << endl;
    cout << "____________________________\n";
    cout << SumOddNumbersFrom1toN_UsingWhileLoop(N) << endl;
    cout << "____________________________\n";
    cout << SumOddNumbersFrom1toN_UsingDoWhileLoop(N) << endl;

    return 0;
}
*/
// Problem #29 ( Sum Even Numbers from 1 to N )
/*
#include <iostream>
using namespace std;

enum enOddorEven { Odd = 1, Even = 2 };

int ReadN() {
    int N;
    cout << "Enter the N : " << endl;
    cin >> N;
    return N;
}

enOddorEven CheckOddOrEven(int N) {
    if (N%2 == 0) {
        return enOddorEven::Even;
    }
    else {
        return enOddorEven::Odd;
    }
}

int SumEvenNumbersFrom1toN_UsingForLoop(int N) {
    int Sum = 0;
    for (int i = 1; i <= N; i++) {
        if (CheckOddOrEven(i)==enOddorEven::Even) {
            Sum += i;
        }
    }
    return Sum;
}

int SumEvenNumbersFrom1toN_UsingWhileLoop(int N) {
    int Sum = 0;
    int i = 0;
    while (i < N) {
        i++;
        if (CheckOddOrEven(i)==enOddorEven::Even) {
            Sum += i;
        }
    }
    return Sum;
}

int SumEvenNumbersFrom1toN_UsingDoWhileLoop(int N) {
    int Sum = 0;
    int i = 0;
    while (i < N) {
        i ++;
        if (CheckOddOrEven(i)==enOddorEven::Even) {
            Sum += i;
        }
    }
    return Sum;
}

void PrintResults(int N) {
    cout << "***\n";
    cout << SumEvenNumbersFrom1toN_UsingForLoop(N) << endl;
    cout << "_________________________________\n";
    cout << SumEvenNumbersFrom1toN_UsingWhileLoop(N) << endl;
    cout << "_________________________________\n";
    cout << SumEvenNumbersFrom1toN_UsingDoWhileLoop(N) << endl;
}

int main() {
    PrintResults(ReadN());
}
*/
// Problem #30 ( Factorial of N! )
/*
#include <iostream>
using namespace std;

int ReadPositiveN(string Message) {
    int N;
    do {
        cout << Message << endl;
        cin >> N;
    } while (N <= 0);
    return N;
}
int GetFactorial(int N) {
    int Factorial = 1;
    for (int Counter = N; Counter >= 1; Counter--) {
        Factorial *= Counter;
    }
    return Factorial;
}

int main() {
    cout << GetFactorial(ReadPositiveN("Enter N : ")) << endl;

    return 0;
}
*/
// Problem #31 ( Power of 2, 3, 4 )
/* Ammar Way;
#include <iostream>
using namespace std;

int ReadN() {
    int N;
    cout << "Enter N : " << endl;
    cin >> N;
    return N;
}

void PrintPowerOf2_3_4(int N) {
    int pow2, pow3, pow4;

    pow2 = N * N;
    pow3 = N*N*N;
    pow4 = N*N*N*N;

    cout << pow2 << " " << pow3 << " " << pow4 << endl;
}

int main() {
    PrintPowerOf2_3_4(ReadN());
}
*/
// Power #32 ( Power fo M )
/*
#include <iostream>
using namespace std;

void ReadNumbers(int& Number, int& M) {
    cout << "Enter The Number : " << endl;
    cin >> Number;
    cout << "Enter The Power : " << endl;
    cin >> M;
}

int GetPower(int Number, int M) {
    if ( M==0 ) { return 1; }
    int Result = 1;
    for ( int i = 1; i <= M; i++) {
        Result *= Number;
    }
    return Result;
}

int main() {
    int Number, M;
    ReadNumbers(Number, M);
    cout << GetPower(Number, M) << endl;

    return 0;
}
*/
/* Abu-Hadhoud Way;
#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Enter The Number : " << endl;
    cin >> Number;
    return Number;
}
int ReadPower() {
    int Power;
    cout << "Enter the Power : " << endl;
    cin >> Power;

    return Power;
}

int GetPower(int Number, int M) {

    if ( M == 0 ) { return 1; }
    int Result = 1;

    for ( int i = 1; i <= M; i++) {
        Result *= Number;
    }
    return Result;
}

int main() {

    cout << GetPower(ReadNumber(), ReadPower()) << endl;

    return 0;
}
*/
// Problem #33 ( Gade A,B,C,D,E,F )
/*
#include <iostream>
using namespace std;

int ReadGread(int From, int To) {
    int Grade;
    do {
        cout << "Enter your grade Mark : " << endl;
        cin >> Grade;
    } while (Grade <From || Grade >To);

    return Grade;
}

char GetGradeLetter(int Grade) {
    if (Grade >= 90){
        return 'A';
    }
    else if (Grade >= 80) {
        return 'B';
    }
    else if (Grade >= 70) {
        return 'C';
    }
    else if (Grade >= 60) {
        return 'D';
    }
    else if (Grade >= 50) {
        return 'E';
    }
    else {
        return 'F';
    }
}

int main() {
    cout << GetGradeLetter(ReadGread(0, 100));
}
*/
// Problem #34 ( Commission Percentage )
/*
#include <iostream>
using namespace std;

float ReadTotalSales(){
    int TotalSales;
    cout << "Enter the Total Sales : " << endl;
    cin >> TotalSales;
    return TotalSales;
}

double GetPercentage(float TotalSales){
    if (TotalSales >= 1000000){
        return 0.01;
    }
    else if (TotalSales >= 500000){
        return 0.02;
    }
    else if (TotalSales >= 100000){
        return 0.03;
    }
    else if (TotalSales >= 50000){
        return 0.05;
    }
    else {
        return 0;
    }
}

double CalculateTotalCommission(float TotalSales){

    return GetPercentage(TotalSales) * TotalSales;
}

int main(){
    float TotalSales = ReadTotalSales();

    cout << endl << "Commission Percentage = " << GetPercentage(TotalSales) << endl;
    cout << endl << "Total Commission Commission = " << CalculateTotalCommission(TotalSales) << endl;

    return 0;

}
*/
// Problem #35 ( Piggy Bank Calculator )
/*
#include <iostream>
#include <string>

using namespace std;

struct stPiggyBankContent{
    int Pennies, Nickles, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent(){
    stPiggyBankContent PiggyBankContent;

    cout << "Enter the amount of Pennies : " << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "Enter the amount of Nickles : " << endl;
    cin >> PiggyBankContent.Nickles;
    cout << "Enter the amount of Dimes : " << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "Enter the amount of Quarters : " << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "Enter the amount of Dollars : " << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

long int CalculateTotalPennies(stPiggyBankContent PiggyBankContent){
    long int TotalPennies;

    TotalPennies = PiggyBankContent.Pennies + PiggyBankContent.Nickles * 5 +
            PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 +
            PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main(){
    long int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies/100 << endl;

    return 0;
}
*/
// Problem #36
/*
#include <iostream>
#include <string>

using namespace std;

enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message){
    float Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enOperationType ReadOpType(){
    char Operator;
    bool loop = true;
    do {
        cout << endl << "Enter the Operator ( '+', '-', '*', '/') : " << endl;
        cin >> Operator;
        switch (Operator){
            case '+':
                return (enOperationType) Operator;
            case '-':
                return (enOperationType) Operator;
            case '*':
                return (enOperationType) Operator;
            case '/':
                return (enOperationType) Operator;
            default:
                cout << "Wrong Operator!!" << endl;

        }
    } while (loop);

}

float Calculate(float Number1, float Number2, enOperationType OpType){
    switch (OpType){

        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiply:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1/Number2;
        default:
            return 0;
    }
}

int main(){
    float Number1, Number2;
    enOperationType OpType;

    Number1 = ReadNumber("Please enter the First Number : ");
    OpType = ReadOpType();
    Number2 = ReadNumber("Please enter the second Number : ");

    cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

    return 0;
}
*/
// Problem #37 ( Sum Until -99 )
/*
#include <iostream>
using namespace std;

float ReadNum(string Message){
    float Num;
    cout << Message << endl;
    cin >> Num;
    return Num;
}

float SumNumbers(){
    int Sum = 0, Number = 0, Counter = 1;

    do {
        Number = ReadNum("Please enter Number " + to_string(Counter));
        if (Number == -99){
            break;
        }
        Sum += Number;
        Counter++;

    } while (Number != -99);
    return Sum;
}

int main(){
    float Sum = SumNumbers();
    cout << endl << "Result is : " << Sum << endl;

    return 0;
}
*/
// Problem #38 ( Prime Number )
/*
#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeOrNot{ Prime = 1, NotPrime = 2};

float ReadPositiveNumber(string Message){
    float Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);
    return Num;
}

enPrimeOrNot CheckIfPrime(int Num){
    int M = round(Num/2);
    for (int Counter = 2; Counter <= M; Counter++){
        if (Num % Counter == 0){
            cout << "The Number can be divided with : " << Counter << endl;
            return enPrimeOrNot::NotPrime;
        }
    }
    return enPrimeOrNot::Prime;
}

void PrintNumberType(int Num){
    switch (CheckIfPrime(Num)){
        case enPrimeOrNot::Prime:
            cout << "The Number is Prime" << endl;
            break;
        case enPrimeOrNot::NotPrime:
            cout << "The Number is Not Prime" << endl;
            break;
    }
}

int main(){
    bool restart;
    do{
        cout << "Do You Want to Check if the Num is Prime? : " << endl;
        cin >> restart;

        PrintNumberType(ReadPositiveNumber("Enter a Positive Number : "));
    } while (restart);

    return 0;
}
*/
// Problem #39 ( Pay Remainder )
/*
#include <iostream>
using namespace std;

float ReadPositiveNumber(string message) {
    float Num;
    do {
        cout << message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid) {
    return TotalCashPaid-TotalBill;
}

int main() {
    float TotalBill = ReadPositiveNumber("Please enter total Bill : ");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid : ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;

    cout << "*********************************\n";
    cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

    return 0;
}
*/
// Problem #40 ( Service Fee and Sales Tax )
/*
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {
    float Num;
    do {
        cout << "Enter a positive Number : " << endl;
        cin >> Num;
    } while(Num <= 0);
    return Num;
}

float TotalBillAfterServiceAndTax(float TotalBill) {
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main() {
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}
*/
// Problem #41 ( Weeks and Days )
/*
#include <iostream>
using namespace std;

float ReadPositiveNumbers(string Message) {
    float Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

float CalculateDays(float NumberOfHours) {
    return NumberOfHours/24;
}

float CalculateWeeks(float NumberOfDays) {
    return NumberOfDays/7;
}

int main() {
    float NumberOfHours = ReadPositiveNumbers("Enter a Positive Number : ");
    float NumberOfDays = CalculateDays(NumberOfHours);
    float NumberOfWeeks = CalculateWeeks(NumberOfDays);
    cout << "\n******************************\n";
    cout << NumberOfWeeks << " Weeks " << endl;
    cout << NumberOfDays << " Days " << endl;

    return 0;
}
*/
// Problem #42 ( Task Duration In Seconds )
/*
#include <iostream>
using namespace std;

struct stTaskDuration {
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {
    int Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

stTaskDuration ReadTaskDuration() {
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter the Number of Days : ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter the Number of Hours : ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter the Number of Minutes");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter the Number of Seconds");

    return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration) {
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}
// الهبدة الابدية :-)
string MakeNumEasyToRead(int Num) {
    string Number = to_string(Num);
    string NewNum = "";
    cout << Number.length() << endl;
    int t = 0;
    for (int i = 3; i <= Number.length(); i += 3) {
        for(int j = t; j < 3+t; j++) {
            NewNum += Number[j];
        }
        if (t+3 >= Number.length()) {
            break;
        }
        NewNum += ',';
        t += 3;
    }

    return NewNum;
}
int main() {

    cout << "\n******************************\n";
    cout << MakeNumEasyToRead(TaskDurationInSeconds(ReadTaskDuration())) << " Seconds " << endl;


}
*/
// Problem #43 ( Seconds to Days Hours Minutes Seconds )
/*
#include <iostream>
#include <cmath>
using namespace std;

struct stTimeinSec {
    int Days, hours, Minute, seconds;
};

int ReadPositiveNumber(string Message) {
    int Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

stTimeinSec SecondstoTime(int TotalSeconds) {
    stTimeinSec Time;
    const int SecondsPerDay = 24*60*60;
    const int SecondsPerHour = 60*60;
    const int SecondsPerMinutes = 60;

    int Remainder = 0;
    Time.Days = floor(TotalSeconds/ SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    Time.hours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    Time.Minute = floor(Remainder / SecondsPerMinutes);
    Remainder = Remainder % SecondsPerMinutes;
    Time.seconds = Remainder;

    return Time;
}

void PrintTaskDuratoinDetails(stTimeinSec Time) {
    cout << "\n";
    cout << Time.Days << ":"
        << Time.hours << ":"
        << Time.Minute << ":"
        << Time.seconds << "\n";

}

int main() {
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds? :");
    PrintTaskDuratoinDetails(SecondstoTime(TotalSeconds));

    return 0;
}
*/
// Problem #44 ( Day Of Week )
/*
#include <iostream>
using namespace std;

enum enDayOfWeek {Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7};

int ReadNumberInRange(string Message, int From, int To) {
    int Number = 0
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enDayOfWeek ReadDayOfWeek() {
    return (enDayOfWeek) ReadNumberInRange("Please enter day number : ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day) {
    switch (Day) {
        case enDayOfWeek::Sun:
            return "Sunday";
        case enDayOfWeek::Mon:
            return "Monday";
        case enDayOfWeek::Tue:
            return "Tuesday";
        case enDayOfWeek::Wed:
            return "Wednesday";
        case enDayOfWeek::Thu:
            return "Thursday";
        case enDayOfWeek::Fri:
            return "Friday";
        case enDayOfWeek::Sat:
            return "Saturday";
        default:
            return "Not a weekday!";
    }

}

int main() {
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

    return 0;
}
*/
// Problem #45 ( Month Of year )
/*
#include <iostream>
using namespace std;

enum enMonthInYear{Jan=1,Feb=2,Mar=3,Apr=4,May=5,Jun=6,Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12};

int ReadNumberInRange(string Message, int From, int To) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enMonthInYear ReadMonthOfYear() {
    return (enMonthInYear) ReadNumberInRange("Enter The Number of the Month : ", 1, 7);
}

string GetMonthOfYear(enMonthInYear Month) {
    switch (Month) {
        case enMonthInYear::Jan:
            return "January";
        case enMonthInYear::Feb:
            return "Februray";
        case enMonthInYear::Mar:
            return "March";
        case enMonthInYear::Apr:
            return "April";
        case enMonthInYear::May:
            return "May";
        case enMonthInYear::Jun:
            return "June";
        case enMonthInYear::Jul:
            return "July";
        case enMonthInYear::Aug:
            return "August";
        case enMonthInYear::Sep:
            return "September";
        case enMonthInYear::Oct:
            return "October";
        case enMonthInYear::Nov:
            return "November";
        case enMonthInYear::Dec:
            return "December";
        default:
            return "Wrong Month!!";
    }
}
int main() {
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

    return 0;
}
*/
// Problem #46 ( Print Letters from A to Z )
/*
#include <iostream>
using namespace std;

void PrintLettersAtoZ() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}

int main() {
    PrintLettersAtoZ();
    return 0;
}
*/
// Problem #47 ( Loan Installment Months )
/*
#include <iostream>
using namespace std;

float ReadPositiveNumbers(string Message) {
    float Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment) {
    return (float)LoanAmount / MonthlyInstallment;
}

int main() {
    float LoanAmount = ReadPositiveNumbers("Please enter loan Amount? : ");
    float MonthlyInstallment = ReadPositiveNumbers("Please Enter Monthly Installment? : ");

    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

    return 0;
}
*/
// Problem #48 ( Monthly Loan Installment )
/*
#include <iostream>
using namespace std;

float ReadPositiveNumbers(string Message) {
    float Num;
    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths) {
    return LoanAmount/HowManyMonths;
}

int main() {
    float LoanAmount = ReadPositiveNumbers("Please Enter Loan Amount? : ");
    float HowManyMonths = ReadPositiveNumbers("How Many Months ? :");

    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
    return 0;
}
*/
// Problem #49 ( ATM PIN )
/*
#include <iostream>
using namespace std;

int ReadPinCode() {
    int Num;
    cout << "Enter The Pin Code : " << endl;
    cin >> Num;
    return Num;
}

void LoginSuccessfully() {
    cout << "You Have Login Successfully! " << endl;
    cout << "********************" << endl;
    cout << "your Balance is " << 7500 << endl;
    cout << "********************" << endl;
    system("color 2F");
}

void LoginFailed() {
    cout << "Wrong Password! " << endl;
    cout << "_____________________" << endl;
    cout << system("color 4F");

}

void CheckIfPass() {
    int PASSWORD = 1234;
    int Pin;
    do {
        int Pin = ReadPinCode();
        if (Pin == PASSWORD) {
            LoginSuccessfully();
            break;
        }
        LoginFailed();
    } while (Pin != PASSWORD);
}

int main() {
    CheckIfPass();
}
*/
// Problem #50 ( ATM PIN 3 Times )
/*
#include <iostream>
using namespace std;

enum enLogin{Pass = 1, Fail = 2};

string ReadPinCode(string Message) {
    string PinCode;
    cout << Message << endl;
    cin >> PinCode;
    return PinCode;
}

enLogin Login() {
    string PinCode;
    string Password = "1234";
    int Counter = 3;
    do {
        Counter--;
        PinCode = ReadPinCode("Enter the Pin Code : ");
        if (PinCode == Password) {
            system("color 2F");
            return enLogin::Pass;
        }
        else {
            system("color 4F");
            cout << "Wrong Pin!! Remaining Chances : " << Counter << endl;
        }

    } while (Counter >= 1 && PinCode != Password);
    return enLogin::Fail;
}

int main() {
    if (Login() == enLogin::Pass) {
        cout << "_________________" << endl;
        cout << "Your Balance is = " << 7500 << endl;
        cout << "_________________" << endl;
    }
    else {
        cout << "Your Card is blocked contact the bank for more information. " << endl;
    }
    return 0;
}
*/
/// Done ----------------- ( 50 Problem Solved )--------------------------- Done
