#include <iostream>
#include <string>
using namespace std;

struct user_detail {
    string name, father_name, address, phone_number, cnic, role, department, age;
    int reg_no;
};

user_detail user[100];

void newuser() {
    int choice;
    for (int i = 0; i < 100; i++) {
        cout<<"Enter Registration Number:";
        cin>>user[i].reg_no;
        cout<<"Enter Name:";
        cin>>user[i].name;
        cout<<"Enter Father Name:";
        cin>>user[i].father_name;
        cout<<"Enter Address:";
        cin>>user[i].address;
        cout<<"Enter Phone Number:";
        cin>>user[i].phone_number;
        cout<<"Enter CNIC:";
        cin>>user[i].cnic;
        cout<<"Enter Role:";
        cin>>user[i].role;
        cout<<"Enter Department:";
        cin>>user[i].department;
        cout<<"Enter Age:";
        cin>>user[i].age;
        cout<<"Do you want to add more user:\n1.Yes\2No";
        cin>>choice;
        switch (choice)
        {
        case 1:
            continue;
        case 2:
            return;
        default:
            break;
        }
    }
}

void showuser() {
    for (int i = 0; i < 100; i++) {
        cout<<"Name:"<<user[i].name<<endl;
        cout<<"Father Name:"<<user[i].father_name<<endl;
        cout<<"Address:"<<user[i].address<<endl;
        cout<<"Phone Number:"<<user[i].phone_number<<endl;
        cout<<"CNIC:"<<user[i].cnic<<endl;
        cout<<"Role:"<<user[i].role<<endl;
        cout<<"Department:"<<user[i].department<<endl;
        cout<<"Age:"<<user[i].age<<endl;
        cout<<"Registration Number:"<<user[i].reg_no<<endl;
    }
}

void add_course() {
    string course_name;
    cout<<"Enter Course Name:";
    cin>>course_name;
    cout<<"Course added:"<<course_name<<endl;
}

void remove_course() {
    string course_name;
    cout<<"Enter Course Name:";
    cin>>course_name;
    cout<<"Course removed:"<<course_name<<endl;
}

void display_course() {
    cout<<"Displaying courses..."<<endl;
}

void attendance() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Attendance marked for:"<<name<<endl;
}

void show_attendance() {
    cout<<"Showing attendance..."<<endl;
}

void add_marks() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Marks added for:"<<name<<endl;
}

void show_marks() {
    cout<<"Showing marks..."<<endl;
}

void add_result() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Result added for:"<<name<<endl;
}

void show_result() {
    cout<<"Showing results..."<<endl;
}

void search_user() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    for (int i = 0; i < 100; i++) {
        if (user[i].name == name) {
            cout<<"Name:"<<user[i].name<<endl;
            cout<<"Father Name:"<<user[i].father_name<<endl;
            cout<<"Address:"<<user[i].address<<endl;
            cout<<"Phone Number:"<<user[i].phone_number<<endl;
            cout<<"CNIC:"<<user[i].cnic<<endl;
            cout<<"Role:"<<user[i].role<<endl;
            cout<<"Department:"<<user[i].department<<endl;
            cout<<"Age:"<<user[i].age<<endl;
            cout<<"Registration Number:"<<user[i].reg_no<<endl;
        }
    }
}

void delete_user() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    for (int i = 0; i < 100; i++) {
        if (user[i].name == name) {
            user[i].name = "";
            user[i].father_name = "";
            user[i].address = "";
            user[i].phone_number = "";
            user[i].cnic = "";
            user[i].role = "";
            user[i].department = "";
            user[i].age = "";
            user[i].reg_no = 0;
        }
    }
}

void update_user() {
    string name;
    cout<<"Enter Name:";
    cin>>name;
    for (int i = 0; i < 100; i++) {
        if (user[i].name == name) {
            cout<<"Enter Name:";
            cin>>user[i].name;
            cout<<"Enter Father Name:";
            cin>>user[i].father_name;
            cout<<"Enter Address:";
            cin>>user[i].address;
            cout<<"Enter Phone Number:";
            cin>>user[i].phone_number;
            cout<<"Enter CNIC:";
            cin>>user[i].cnic;
            cout<<"Enter Role:";
            cin>>user[i].role;
            cout<<"Enter Department:";
            cin>>user[i].department;
            cout<<"Enter Age:";
            cin>>user[i].age;
            cout<<"Enter Registration Number:";
            cin>>user[i].reg_no;
        }
    }
}

void main_menu() {
    int choice;
    while (true) {
        cout<<"\n--- Main Menu ---\n";
        cout<<"1. New User\n";
        cout<<"2. Show User\n";
        cout<<"3. Add Course\n";
        cout<<"4. Remove Course\n";
        cout<<"5. Display Courses\n";
        cout<<"6. Mark Attendance\n";
        cout<<"7. Show Attendance\n";
        cout<<"8. Add Marks\n";
        cout<<"9. Show Marks\n";
        cout<<"10. Add Result\n";
        cout<<"11. Show Result\n";
        cout<<"12. Search User\n";
        cout<<"13. Delete User\n";
        cout<<"14. Update User\n";
        cout<<"15. Exit\n";

        cout<<"Enter your choice:";
        cin>>choice;

        switch (choice) {
            case 1:
                newuser();
                break;
            case 2:
                showuser();
                break;
            case 3:
                add_course();
                break;
            case 4:
                remove_course();
                break;
            case 5:
                display_course();
                break;
            case 6:
                attendance();
                break;
            case 7:
                show_attendance();
                break;
            case 8:
                add_marks();
                break;
            case 9:
                show_marks();
                break;
            case 10:
                add_result();
                break;
            case 11:
                show_result();
                break;
            case 12:
                search_user();
                break;
            case 13:
                delete_user();
                break;
            case 14:
                update_user();
                break;
            case 15:
                exit(0);
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
}

int main() {
    main_menu();
    return 0;
}
