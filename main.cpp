#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <limits>


#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define CYAN "\033[36m"
#define WHITE "\033[97m"
using namespace std;


class diabetes
{
private:
    char name[40];
    int age;
    int weight;
    int height;
    char sex;
    char y;
    char s[13];
    float x;
    char w;

public:
    void welcome_screen();
    void getvalue();
    void GetMedicalResults1();
    void CheckType();
    void GetSymptoms();
    int AnalyseSymptoms(int);
    char display_message(int, int);
    void A1C();
    void OGTT();
    void FPG();
    void Urination();
    void Thirsty();
    void Hunger();
    void WeightLose();
    void BlurryVision();
    void SlowHealing();
    void Insulin();
    void AutoAntibodies();
    void CPeptides();
    void Numbness();
    void Pain();
    
};


void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void clear()
{
    system("cls");
}

void diabetes::welcome_screen()
{
    clear();
    int consoleWidth = 120;
    gotoxy(80 - 55, 2);
    cout << YELLOW << "--------------------------------- W E L C O M E ---------------------------------";

    gotoxy(consoleWidth - 13, 4);
    cout << YELLOW << "DR. RAVI LABS " << RESET;

    gotoxy(consoleWidth - 13, 5);
    cout << GREEN << "DONE BY: " << GREEN << "RAVI ARORA" << RESET;

    gotoxy(20, 25);
    std::cout << CYAN << "PRESS ANY KEY TO CONTINUE";
    getch();
    clear();
}

void diabetes::getvalue()
{
    int consoleWidth = 120;

    gotoxy(80 - 55, 2);
    cout << YELLOW << "--------------------------------- W E L C O M E ---------------------------------";

    gotoxy(consoleWidth - 13, 4);
    cout << YELLOW << "DR. RAVI LABS " << RESET;

    gotoxy(consoleWidth - 13, 5);
    cout << GREEN << "DONE BY: " << GREEN << "RAVI ARORA" << RESET;

    gotoxy(20, 8);
    cout << WHITE << "ENTER YOUR INFORMATION";

    gotoxy(25, 10);
    cout << WHITE << "NAME : ";

    std::cin.ignore();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    gotoxy(25, 12);
    puts("AGE :");
    gotoxy(32, 12);
    while (!(std::cin >> age))
    {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Invalid input for age. Please enter a number: ";
    }

    gotoxy(25, 14);
    puts("WEIGHT(kg) :");
    gotoxy(39, 14);
    while (!(std::cin >> weight))
    {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Invalid input for weight. Please enter a number: ";
    }

    gotoxy(25, 16);
    puts("HEIGHT(cm) :");
    gotoxy(39, 16);
    while (!(std::cin >> height))
    {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout << "Invalid input for height. Please enter a number: ";
    }
    gotoxy(25, 18);
    puts("SEX(M/F)   :");
    gotoxy(39, 18);
    std::cin >> sex;
    std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


void diabetes::GetSymptoms()
{

Urination();
Thirsty();
Hunger();
WeightLose();
BlurryVision();
SlowHealing();

}


void diabetes::GetMedicalResults1()
{





 
    GetSymptoms();
}

// void diabetes::CheckType()


void diabetes::A1C()
{// Taking A1C readings
    cout << "Enter your A1C readings : " << endl;
    cin >> x;

    if (x < 5.7)
    {
        s[0] = 'N';
    }

    else if (5.7 < x < 6.4)
    {
        s[0] = 'P';
    }

    else
    {
        s[0] = 'D';
        A1C();
    }
}

void diabetes::OGTT()
{
    // Taking OGTT readings

    cout << "Enter your OGTT readings : " << endl;
    cin >> x;

    if (x < 140)
    {
        s[1] = 'N';
    }

    else if (140 < x < 199)
    {
        s[1] = 'P';
    }

    else
    {
        s[1] = 'D';
        OGTT();
    }
}

void diabetes::FPG()
{    // Taking FPG readings

    cout << "Enter your FPG readings : " << endl;
    cin >> x;

    if (100 < x)
    {
        s[2] = 'N';
    }

    else if (100 < x < 125)
    {
        s[2] = 'P';
    }

    else
    {
        s[2] = 'D';
        FPG();
    }
}

void diabetes::Insulin()
{// Taking Insulin level

    cout << "Enter your Insulin Level  : " << endl;
    cin >> x;

    if (x < 5)
    {
        s[3] = '1';
    }

    else if (5< x < 15)
    {
        s[3] = '2';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
        Insulin();
    }
}

void diabetes::CPeptides()
{// Taking C-Peptide level

    cout << "Enter your C-Peptide Level  : " << endl;
    cin >> x;

    if (x < 0.2)
    {
        s[4] = '1';
    }

    else if ( x>=0.2)
    {
        s[4] = '2';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
        CPeptides();
    }
}

void diabetes::AutoAntibodies()
{// Taking Auto-antibodies presence

    cout << "Auto-antibodies (A/B)  : " << endl;
    cin >> x;
    x= toupper(x);

    if (x=='P')
    {
        s[5] = '1';
    }

    else if ( x=='A')
    {
        s[5] = '2';
    }

    else
    {
        cout<<"Wrong Input"<<endl;
    }   
    AutoAntibodies();
}

void diabetes::Urination()
{    // URINATION
    cout << "Do you go frequent urination [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[8] = 'Y';
    }

    else if (w == 'N')
    {
        s[8] = 'N';
    }

    else
        {cout << "Wrong Input"<< endl;
        clear();
        
        Urination();}
}

void diabetes::Thirsty()
{    // THIRSTY
    cout << "Have you been feeling unusually thirsty lately?  [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[9] = 'Y';
    }

    else if (w == 'N')
    {
        s[9] = 'N';
    }

    else
        cout << "Wrong Input";
        Thirsty();
}

void diabetes::Hunger()
{    // HUNGER
    cout << "Have you experienced a persistent feeling of hunger even after eating? [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[10] = 'Y';
    }

    else if (w == 'N')
    {
        s[10] = 'N';
    }

    else
        cout << "Wrong Input"<<endl;
        Hunger();
}

void diabetes::WeightLose()
{    // WEIGHT LOSE
    cout << "Have you noticed any unexpected or unintentional weight loss recently? [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[11] = 'Y';
    }

    else if (w == 'N')
    {
        s[11] = 'N';
    }

    else
        cout << "Wrong Input";
        WeightLose();
}

void diabetes::BlurryVision()
{   // BLURRY VISION
    cout << "Do you notice any distortion or fuzziness in your visual field? [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[12] = 'Y';
    }

    else if (w == 'N')
    {
        s[12] = 'N';
    }

    else
        cout << "Wrong Input";
        BlurryVision();
}

void diabetes::SlowHealing()
{    // SLOW HEALING
    cout << "Are you experiencing delayed wound closure  [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[13] = 'Y';
    }

    else if (w == 'N')
    {
        s[13] = 'N';
    }

    else
        cout << "Wrong Input";
        SlowHealing();
}

void diabetes::Numbness()
{    // HANDS AND FEETS NUMBNESS
    cout << "Do you experience any tingling, numbness, or loss of sensation in your hands or feet? [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[6] = 'Y';
    }

    else if (w == 'N')
    {
        s[6] = 'N';
    }

    else
        cout << "Wrong Input";
        Numbness();

}

void diabetes::Pain()
{    // HANDS AND FEETS PAIN
    cout << "Have you been experiencing any pain, discomfort, or aching in your hands or feet? [Y/N]" << endl;
    cin >> w;
    w = toupper(w);

    if (w == 'Y')
    {
        s[7] = 'Y';
    }

    else if (w == 'N')
    {
        s[7] = 'N';
    }

    else
        cout << "Wrong Input";
        Pain();

}

int main()
{
    char y;
    
    diabetes dts;
    dts.welcome_screen();
    dts.getvalue();
    
    cout << "Have you had any medical tests conducted recently? (Y/N)  "<< endl;
    cin >> y;
    y=toupper(y);

    if (y=='Y')
    {dts.GetMedicalResults1();}

    else if (y=='N')
    {dts.GetSymptoms();}

    else {cout<<"Wrong Input"<<endl;}

    return 0;
}