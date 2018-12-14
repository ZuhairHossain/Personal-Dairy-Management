#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
#include<windows.h>

using namespace std;
string finish="@@",new_line="\n",txt=".txt";
bool loop=true;

void welcome()
{
    int i;
    system("cls");
    for(i=0; i<50; i++) printf("%c",194);
    printf("\n\t\t** My Dairy **\n");
    for(i=0; i<50; i++) printf("%c",193);
    printf("\n\n");

    for(i=0; i<50; i++) printf("%c",194);

    printf("\nDesigned and Programmed by: \n");
    printf("\t\tSuraiya Banu Lata \n");
    printf("\t\tID:2014-1-60-065\n");
    printf("\t\tEWU:CSE\n");

    for(i=0; i<50; i++) printf("%c",193);
    cout<<endl;
    system("pause");
}

class data_record
{
    string eDate,eTime,event_Name,event_Details;
public:
    string add_rec();
    void write_rec(string filename);
    string select_read_rec();
    void read_rec(string filename);
    string select_search_rec();
    void search_rec(string filename);
    string select_edit_rec();
    void edit_rec(string filename);
    string select_delete_rec();
    void delete_rec(string filename);

};

string data_record::add_rec()
{
    string file;

    while(loop)
    {
        int choice;
        system("cls");
        cout<<"Please select category: "<<endl;
        cout<<"Select one option below: ";
        cout<<"\n\t1-->Add Personal record to file";
        cout<<"\n\t2-->Add Professional record to file";
        cout<<"\n\t3--> Exit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Add \"Birthday\" record to file";
                cout<<"\n\t2-->Add \"Anniversary\" record to file";
                cout<<"\n\t3-->Add \"Visitation\" record to file";
                cout<<"\n\t4-->Add \"Extra_Ordinary_Day\" record to file";
                cout<<"\n\t5-->Add \"Daily_Life\" record to file";
                cout<<"\n\t6-->Add \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Birthday.txt");
                    return(file);
                case 2:
                    file=("Anniversary.txt");
                    return(file);
                case 3:
                    file=("Visitation.txt");
                    return(file);
                case 4:
                    file=("Extra_Ordinary_Day.txt");
                    return(file);
                case 5:
                    file=("Daily_Life.txt");
                    return(file);
                case 6:
                    file=("Other.txt");
                    return(file);
                case 7:
                {
                    cout<<"Thank You for using our service."<<endl;

                    exit(0);
                }
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 2:
        {

            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Add \"Appointment\" record to file";
                cout<<"\n\t2-->Add \"Interview\" record to file";
                cout<<"\n\t3-->Add \"Presentation\" record to file";
                cout<<"\n\t4-->Add \"Work_Schedule\" record to file";
                cout<<"\n\t5-->Add \"Deadlines\" record to file";
                cout<<"\n\t6-->Add \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Appointment.txt");
                    return(file);
                case 2:
                    file=("Interview.txt");
                    return(file);
                case 3:
                    file=("Presentation.txt");
                    return(file);
                case 4:
                    file=("Work_Schedule.txt");
                    return(file);
                case 5:
                    file=("Deadlines.txt");
                    return(file);
                case 6:
                    file=("Pro_Other.txt");
                    return(file);
                case 7:
                    exit(0);
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 3:
        {
            cout<<"Thank You for using our service."<<endl;
            exit(0);
        }
        default:
            cout<<"\nEnter correct choice please..."<<endl;
        }
    }

}

void data_record::write_rec(string filename)
{
    fflush(stdin);
    ofstream outfile;
    outfile.open(filename, ios::out|ios::app);

    cout<<"Enter Event's Name: ";
    getline(cin,event_Name);
    outfile<<event_Name<<endl;
    cout<<"Enter Date: ";
    getline(cin,eDate);
    outfile<<eDate<<endl;
    cout<<"Enter Time: ";
    getline(cin,eTime);
    outfile<<eTime<<endl;
    cout<<"Enter Event's Details:(press-->enter+@@+enter<--to end) "<<endl;
    do
    {
        getline(cin,event_Details);
        outfile<<event_Details;
        //if(event_Details!=finish)
        outfile<<endl;
    }
    while(event_Details!=finish);
    outfile.close();
    cout<<endl;
    cout<<"Data added successfully."<<endl;

}

string data_record::select_read_rec()
{
    string file;

    while(loop)
    {
        int choice;
        system("cls");
        cout<<"Please select category: "<<endl;
        cout<<"Select one option below: ";
        cout<<"\n\t1-->View Personal record to file";
        cout<<"\n\t2-->View Professional record to file";
        cout<<"\n\t3--> Exit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->View \"Birthday\" record to file";
                cout<<"\n\t2-->View \"Anniversary\" record to file";
                cout<<"\n\t3-->View \"Visitation\" record to file";
                cout<<"\n\t4-->View \"Extra_Ordinary_Day\" record to file";
                cout<<"\n\t5-->View \"Daily_Life\" record to file";
                cout<<"\n\t6-->View \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Birthday.txt");
                    return(file);
                case 2:
                    file=("Anniversary.txt");
                    return(file);
                case 3:
                    file=("Visitation.txt");
                    return(file);
                case 4:
                    file=("Extra_Ordinary_Day.txt");
                    return(file);
                case 5:
                    file=("Daily_Life.txt");
                    return(file);
                case 6:
                    file=("Other.txt");
                    return(file);
                case 7:
                {
                    cout<<"Thank You for using our service."<<endl;

                    exit(0);
                }
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 2:
        {

            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->View \"Appointment\" record to file";
                cout<<"\n\t2-->View \"Interview\" record to file";
                cout<<"\n\t3-->View \"Presentation\" record to file";
                cout<<"\n\t4-->View \"Work_Schedule\" record to file";
                cout<<"\n\t5-->View \"Deadlines\" record to file";
                cout<<"\n\t6-->View \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Appointment.txt");
                    return(file);
                case 2:
                    file=("Interview.txt");
                    return(file);
                case 3:
                    file=("Presentation.txt");
                    return(file);
                case 4:
                    file=("Work_Schedule.txt");
                    return(file);
                case 5:
                    file=("Deadlines.txt");
                    return(file);
                case 6:
                    file=("Pro_Other.txt");
                    return(file);
                case 7:
                    exit(0);
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 3:
        {
            cout<<"Thank You for using our service."<<endl;
            exit(0);
        }
        default:

            cout<<"\nEnter correct choice please..."<<endl;

        }
    }

}

void data_record::read_rec(string filename)
{
    fflush(stdin);
    string check;
    ifstream infile;
    infile.open(filename, ios::in);
    if(!infile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }
    cout<<"\n****Data from file****"<<endl<<endl;
    // infile.seekg(0,ios::end);
    //getline(infile,check);
    // infile.seekg(0,ios::beg);
    do
    {

        cout<<"Event's Name: ";
        getline(infile,event_Name);
        cout<<event_Name<<endl;
        cout<<"Event's Date: ";
        getline(infile,eDate);
        cout<<eDate<<endl;
        cout<<"Event's Time: ";
        getline(infile,eTime);
        cout<<eTime<<endl;
        cout<<"Event's Details: ";
        getline(infile,event_Details);
        while(event_Details!=finish)
        {
            cout<<event_Details<<endl;
            getline(infile,event_Details);
        }

        cout<<"-----------------------------------"<<endl;
    }
    while(event_Name.empty());
    infile.close();


}



string data_record::select_search_rec()
{
    string file;

    while(loop)
    {
        int choice;
        system("cls");
        cout<<"Please select category: "<<endl;
        cout<<"Select one option below: ";
        cout<<"\n\t1-->Search Personal record to file";
        cout<<"\n\t2-->Search Professional record to file";
        cout<<"\n\t3--> Exit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            while(loop)
            {

                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Search \"Birthday\" record to file";
                cout<<"\n\t2-->Search \"Anniversary\" record to file";
                cout<<"\n\t3-->Search \"Visitation\" record to file";
                cout<<"\n\t4-->Search \"Extra_Ordinary_Day\" record to file";
                cout<<"\n\t5-->Search \"Daily_Life\" record to file";
                cout<<"\n\t6-->Search \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Birthday.txt");
                    return(file);
                case 2:
                    file=("Anniversary.txt");
                    return(file);
                case 3:
                    file=("Visitation.txt");
                    return(file);
                case 4:
                    file=("Extra_Ordinary_Day.txt");
                    return(file);
                case 5:
                    file=("Daily_Life.txt");
                    return(file);
                case 6:
                    file=("Other.txt");
                    return(file);
                case 7:
                {
                    cout<<"Thank You for using our service."<<endl;

                    exit(0);
                }
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 2:
        {

            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Search \"Appointment\" record to file";
                cout<<"\n\t2-->Search \"Interview\" record to file";
                cout<<"\n\t3-->Search \"Presentation\" record to file";
                cout<<"\n\t4-->Search \"Work_Schedule\" record to file";
                cout<<"\n\t5-->Search \"Deadlines\" record to file";
                cout<<"\n\t6-->Search \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Appointment.txt");
                    return(file);
                case 2:
                    file=("Interview.txt");
                    return(file);
                case 3:
                    file=("Presentation.txt");
                    return(file);
                case 4:
                    file=("Work_Schedule.txt");
                    return(file);
                case 5:
                    file=("Deadlines.txt");
                    return(file);
                case 6:
                    file=("Pro_Other.txt");
                    return(file);
                case 7:
                    exit(0);
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 3:
        {
            cout<<"Thank You for using our service."<<endl;
            exit(0);
        }
        default:
            cout<<"\nEnter correct choice please..."<<endl;

        }
    }
}


void data_record::search_rec(string filename)
{
    fflush(stdin);
    int n=0;
    string check,temp;
    fstream iofile;
    iofile.open(filename, ios::in|ios::out);
    if(!iofile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }

    cout<<"Enter Event's_Name to Search(exact format is required) ."<<endl;
    getline(cin,check);

    while(!iofile.eof())
    {
        getline(iofile,temp);
        if(temp==check && temp.length()==check.length())
        {
            n++;
            //system("cls");
            cout<<"\t\tFound Result(s): "<<endl;
            cout<<"Event's Name: ";
            cout<<temp<<endl;
            cout<<"Event's Date: ";
            getline(iofile,eDate);
            cout<<eDate<<endl;
            cout<<"Event's Time: ";
            getline(iofile,eTime);
            cout<<eTime<<endl;
            cout<<"Event's Details: ";
            getline(iofile,event_Details);
            while(event_Details!=finish)
            {
                cout<<event_Details<<endl;
                getline(iofile,event_Details);
            }

            cout<<"-----------------------------------"<<endl<<endl;
        }

    }

    if(n==0)
        cout<<"\n\tNo such event is Found.\n\tPlease use \"SHOW RECORD\" to be sure.\n\t Thank You."<<endl;
    iofile.close();


}


string data_record::select_edit_rec()
{
    string file;

    while(loop)
    {
        int choice;
        system("cls");
        cout<<"Please select category: "<<endl;
        cout<<"Select one option below: ";
        cout<<"\n\t1-->Edit Personal record to file";
        cout<<"\n\t2-->Edit Professional record to file";
        cout<<"\n\t3--> Exit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Edit \"Birthday\" record to file";
                cout<<"\n\t2-->Edit \"Anniversary\" record to file";
                cout<<"\n\t3-->Edit \"Visitation\" record to file";
                cout<<"\n\t4-->Edit \"Extra_Ordinary_Day\" record to file";
                cout<<"\n\t5-->Edit \"Daily_Life\" record to file";
                cout<<"\n\t6-->Edit \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Birthday.txt");
                    return(file);
                case 2:
                    file=("Anniversary.txt");
                    return(file);
                case 3:
                    file=("Visitation.txt");
                    return(file);
                case 4:
                    file=("Extra_Ordinary_Day.txt");
                    return(file);
                case 5:
                    file=("Daily_Life.txt");
                    return(file);
                case 6:
                    file=("Other.txt");
                    return(file);
                case 7:
                {
                    cout<<"Thank You for using our service."<<endl;

                    exit(0);
                }
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 2:
        {

            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Edit \"Appointment\" record to file";
                cout<<"\n\t2-->Edit \"Interview\" record to file";
                cout<<"\n\t3-->Edit \"Presentation\" record to file";
                cout<<"\n\t4-->Edit \"Work_Schedule\" record to file";
                cout<<"\n\t5-->Edit \"Deadlines\" record to file";
                cout<<"\n\t6-->Edit \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Appointment.txt");
                    return(file);
                case 2:
                    file=("Interview.txt");
                    return(file);
                case 3:
                    file=("Presentation.txt");
                    return(file);
                case 4:
                    file=("Work_Schedule.txt");
                    return(file);
                case 5:
                    file=("Deadlines.txt");
                    return(file);
                case 6:
                    file=("Pro_Other.txt");
                    return(file);
                case 7:
                    exit(0);
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 3:
        {
            cout<<"Thank You for using our service."<<endl;
            exit(0);
        }
        default:
            cout<<"\nEnter correct choice please..."<<endl;

        }
    }

}


void data_record::edit_rec(string filename)
{

    fflush(stdin);
    int n=0;
    string check,temp;
    fstream iofile;
    iofile.open(filename, ios::in|ios::out);
    if(!iofile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }

    cout<<"Enter Event's_Name to edit(exact format is required) ."<<endl;
    getline(cin,check);

    ofstream outfile;
    string outTemp="temp.txt";
    outfile.open(outTemp, ios::out);

    while(!iofile.eof())
    {
        getline(iofile,temp);
        if(temp==check)
        {
            n++;
            //system("cls");
            cout<<"\t\tFound Result(s): "<<endl;

            cout<<"Event's Name: ";
            cout<<temp<<endl;
            cout<<"Enter new Event's Name: "<<endl;
            getline(cin,check);
            outfile<<check<<endl;

            cout<<"Event's Date: ";
            getline(iofile,eDate);
            cout<<eDate<<endl;
            cout<<"Enter new Event's Date: "<<endl;
            getline(cin,check);
            outfile<<check<<endl;

            cout<<"Event's Time: ";
            getline(iofile,eTime);
            cout<<eTime<<endl;
            cout<<"Enter new Event's Time: "<<endl;
            getline(cin,check);
            outfile<<check<<endl;


            cout<<"Event's Details: ";

            do
            {
                getline(iofile,event_Details);
                cout<<event_Details<<endl;
                cout<<"Enter new Event's Details: "<<endl;
                getline(cin,check);
                outfile<<check<<endl;
            }
            while(check!=finish);
            cout<<"-----------------------------------"<<endl<<endl;
        }

    }

    if(n==0)
        cout<<"\n\tNo such event is Found.\n\tPlease use \"SHOW RECORD\" to be sure.\n\t Thank You."<<endl;

    outfile.close();
    iofile.close();
    remove(filename.c_str());
    int result;
    result=rename(outTemp.c_str(),filename.c_str());

}


string data_record::select_delete_rec()
{
    string file;

    while(loop)
    {
        int choice;
        system("cls");
        cout<<"Please select category: "<<endl;
        cout<<"Select one option below: ";
        cout<<"\n\t1-->Delete Personal record to file";
        cout<<"\n\t2-->Delete Professional record to file";
        cout<<"\n\t3--> Exit.";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Delete \"Birthday\" record to file";
                cout<<"\n\t2-->Delete \"Anniversary\" record to file";
                cout<<"\n\t3-->Delete \"Visitation\" record to file";
                cout<<"\n\t4-->Delete \"Extra_Ordinary_Day\" record to file";
                cout<<"\n\t5-->Delete \"Daily_Life\" record to file";
                cout<<"\n\t6-->Delete \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Birthday.txt");
                    return(file);
                case 2:
                    file=("Anniversary.txt");
                    return(file);
                case 3:
                    file=("Visitation.txt");
                    return(file);
                case 4:
                    file=("Extra_Ordinary_Day.txt");
                    return(file);
                case 5:
                    file=("Daily_Life.txt");
                    return(file);
                case 6:
                    file=("Other.txt");
                    return(file);
                case 7:
                {
                    cout<<"Thank You for using our service."<<endl;

                    exit(0);
                }
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 2:
        {

            while(loop)
            {
                system("cls");
                int pchoice;
                cout<<"Select one option below ";
                cout<<"\n\t1-->Delete \"Appointment\" record to file";
                cout<<"\n\t2-->Delete \"Interview\" record to file";
                cout<<"\n\t3-->Delete \"Presentation\" record to file";
                cout<<"\n\t4-->Delete \"Work_Schedule\" record to file";
                cout<<"\n\t5-->Delete \"Deadlines\" record to file";
                cout<<"\n\t6-->Delete \"Other\" record to file";
                cout<<"\n\t7-->Exit.";
                cout<<"\nEnter your choice: ";
                cin>>pchoice;

                switch(pchoice)
                {
                case 1:
                    file=("Appointment.txt");
                    return(file);
                case 2:
                    file=("Interview.txt");
                    return(file);
                case 3:
                    file=("Presentation.txt");
                    return(file);
                case 4:
                    file=("Work_Schedule.txt");
                    return(file);
                case 5:
                    file=("Deadlines.txt");
                    return(file);
                case 6:
                    file=("Pro_Other.txt");
                    return(file);
                case 7:
                    exit(0);
                default:

                    cout<<"\nEnter correct choice please..."<<endl;
                }
            }
        }
        case 3:
        {
            cout<<"Thank You for using our service."<<endl;
            exit(0);
        }
        default:
            cout<<"\nEnter correct choice please..."<<endl;

        }
    }

}


void data_record::delete_rec(string filename)
{
    fstream iofile;
    iofile.open(filename, ios::in|ios::out);
    if(!iofile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }

        iofile.close();

    cout<<"You want to remove all the data??\n\tThis task is permanent .."<<endl;
    int choice;
    while(true)
    {
        cout<<"\n\t1 to remove.\n\t2 to exit."<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            remove(filename.c_str());
            cout<<"Data Removed :) "<<endl;
            return;
        case 2:
            cout<<"Have a nice time."<<endl;
            exit(0);
        default:
            cout<<"Wrong input , Please correct it."<<endl;
        }
    }
}

int main()
{
    data_record Dairy;
    int choice;
    welcome();
    while(loop)
    {

        try
        {

            cout<<"Select one option below ";
            cout<<"\n\t1-->Add record to file";
            cout<<"\n\t2-->Show record from file";
            cout<<"\n\t3-->Search record from file";
            cout<<"\n\t4-->Edit Record";
            cout<<"\n\t5-->Delete Record";
            cout<<"\n\t6-->Quit";
            cout<<"\nEnter your choice: ";

            cin>>choice;
            throw choice;
        }
        catch(int a)
        {
            switch(a)
            {
            case 1:
                Dairy.write_rec(Dairy.add_rec());
                break;
            case 2:
                Dairy.read_rec(Dairy.select_read_rec());
                break;
            case 3:
                Dairy.search_rec(Dairy.select_search_rec());
                break;
            case 4:
                Dairy.edit_rec(Dairy.select_edit_rec());
                break;
            case 5:
                Dairy.delete_rec(Dairy.select_delete_rec());
                break;

            case 6:
                cout<<"Thank you for using our service."<<endl;
                exit(0);
                break;
            default:
                cout<<"\nEnter correct choice";
                system("cls");
            }
        }
    }

    //Dairy.write_rec();
    system("pause");

    return 0;
}
