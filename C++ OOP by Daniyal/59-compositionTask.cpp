// Task from lab 10

#include <iostream>
using namespace std;

class Student
{
    char *Name;
    char *registrationNum;
    char *City;

public:
    Student()
    {
        Name = nullptr;
        registrationNum = nullptr;
        City = nullptr;
    }

    Student(const char *name, const char *regNum, const char *city)
    {
        int len1 = 0, len2 = 0, len3 = 0, i = 0, j = 0, k = 0;

        // for name
        while (name[len1] != '\0')
        {
            len1++;
        }

        Name = new char[len1 + 1];
        while (name[i] != '\0')
        {
            Name[i] = name[i];
            i++;
        }
        Name[i] = '\0';

        // for regNum
        while (regNum[len2] != '\0')
        {
            len2++;
        }

        registrationNum = new char[len2 + 1];
        while (regNum[j] != '\0')
        {
            registrationNum[j] = regNum[j];
            j++;
        }
        registrationNum[j] = '\0';

        // for city
        while (city[len3] != '\0')
        {
            len3++;
        }

        City = new char[len3 + 1];
        while (city[k] != '\0')
        {
            City[k] = city[k];
            k++;
        }
        City[k] = '\0';
    }
    // copy constructor
    Student(const Student &obj)
    {
        int len1 = 0, len2 = 0, len3 = 0, i = 0, j = 0, k = 0;

        // for name
        while (obj.Name[len1] != '\0')
        {
            len1++;
        }

        Name = new char[len1 + 1];
        while (obj.Name[i] != '\0')
        {
            Name[i] = obj.Name[i];
            i++;
        }
        Name[i] = '\0';

        // for regNum
        while (obj.registrationNum[len2] != '\0')
        {
            len2++;
        }

        registrationNum = new char[len2 + 1];
        while (obj.registrationNum[j] != '\0')
        {
            registrationNum[j] = obj.registrationNum[j];
            j++;
        }
        registrationNum[j] = '\0';

        // for city
        while (obj.City[len3] != '\0')
        {
            len3++;
        }

        City = new char[len3 + 1];
        while (obj.City[k] != '\0')
        {
            City[k] = obj.City[k];
            k++;
        }
        City[k] = '\0';
    }

    Student &operator=(const Student &obj)
    {
        delete[] Name;
        delete[] registrationNum;
        delete[] City;

        int len1 = 0, len2 = 0, len3 = 0, i = 0, j = 0, k = 0;

        // for name
        while (obj.Name[len1] != '\0')
        {
            len1++;
        }

        Name = new char[len1 + 1];
        while (obj.Name[i] != '\0')
        {
            Name[i] = obj.Name[i];
            i++;
        }
        Name[i] = '\0';

        // for regNum
        while (obj.registrationNum[len2] != '\0')
        {
            len2++;
        }

        registrationNum = new char[len2 + 1];
        while (obj.registrationNum[j] != '\0')
        {
            registrationNum[j] = obj.registrationNum[j];
            j++;
        }
        registrationNum[j] = '\0';

        // for city
        while (obj.City[len3] != '\0')
        {
            len3++;
        }

        City = new char[len3 + 1];
        while (obj.City[k] != '\0')
        {
            City[k] = obj.City[k];
            k++;
        }
        City[k] = '\0';
        return *this;
    }

    void setName(const char *name)
    {
        int i = 0;
        while (name[i] != '\0')
        {
            Name[i] = name[i];
            i++;
        }
        Name[i] = '\0';
    }

    void setReg(const char *regNum)
    {
        int j = 0;
        while (regNum[j] != '\0')
        {
            registrationNum[j] = regNum[j];
            j++;
        }
        registrationNum[j] = '\0';
    }

    void setCity(const char *city)
    {
        int k = 0;
        while (city[k] != '\0')
        {
            City[k] = city[k];
            k++;
        }
        City[k] = '\0';
    }

    char *getName()
    {
        return Name;
    }
    char *getReg()
    {
        return registrationNum;
    }
    char *getCity()
    {
        return City;
    }

    ~Student()
    {
        delete[] Name;
        delete[] registrationNum;
        delete[] City;
    }

    void displayStudent()
    {
        cout << "Name :" << Name << endl;
        cout << "Registration :" << registrationNum << endl;
        cout << "City :" << City << endl;
    }
};

// INSTRUCTOR
class Instructor
{
    char *name;
    char *education;

public:
    Instructor()
    {
        name = nullptr;
        education = nullptr;
    }

    Instructor(const char *n, const char *e)
    {
        // name
        int len1 = 0;
        while (n[len1] != '\0')
            len1++;

        name = new char[len1 + 1];

        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';

        // education
        int len2 = 0;
        while (e[len2] != '\0')
            len2++;

        education = new char[len2 + 1];

        int j = 0;
        while (e[j] != '\0')
        {
            education[j] = e[j];
            j++;
        }
        education[j] = '\0';
    }

    // Copy constructor
    Instructor(const Instructor &obj)
    {
        int len1 = 0;
        while (obj.name[len1] != '\0')
            len1++;

        name = new char[len1 + 1];

        int i = 0;
        while (obj.name[i] != '\0')
        {
            name[i] = obj.name[i];
            i++;
        }
        name[i] = '\0';

        int len2 = 0;
        while (obj.education[len2] != '\0')
            len2++;

        education = new char[len2 + 1];

        int j = 0;
        while (obj.education[j] != '\0')
        {
            education[j] = obj.education[j];
            j++;
        }
        education[j] = '\0';
    }

    // Assignment operator
    Instructor &operator=(const Instructor &obj)
    {
        delete[] name;
        delete[] education;

        int len1 = 0;
        while (obj.name[len1] != '\0')
            len1++;

        name = new char[len1 + 1];

        int i = 0;
        while (obj.name[i] != '\0')
        {
            name[i] = obj.name[i];
            i++;
        }
        name[i] = '\0';

        int len2 = 0;
        while (obj.education[len2] != '\0')
            len2++;

        education = new char[len2 + 1];

        int j = 0;
        while (obj.education[j] != '\0')
        {
            education[j] = obj.education[j];
            j++;
        }
        education[j] = '\0';
        return *this;
    }

    // Destructor
    ~Instructor()
    {
        delete[] name;
        delete[] education;
    }

    // Setter for name
    void setName(const char *n)
    {

        delete[] name;

        int len1 = 0;
        while (n[len1] != '\0')
            len1++;

        name = new char[len1 + 1];

        int i = 0;
        while (n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }

    // Getter for name
    char *getName()
    {
        return name;
    }

    // Setter for education
    void setEducation(const char *e)
    {

        delete[] education;

        int len2 = 0;
        while (e[len2] != '\0')
            len2++;

        education = new char[len2 + 1];

        int j = 0;
        while (e[j] != '\0')
        {
            education[j] = e[j];
            j++;
        }
        education[j] = '\0';
    }

    char *getEducation()
    {
        return education;
    }

    void displayInstructor()
    {
        cout << "Name: " << name << endl;
        cout << "Education: " << education << endl;
    }
};

// COURSE
class Course
{
    char *courseName;
    Instructor instructor;
    Student *students;
    int numStudents;

public:
    // Default constructor
    Course()
    {
        courseName = nullptr;
    }

    // Parameterized constructor
    Course(const char *name, Instructor &instObj, Student *std, int stNum)
    {
        instructor = instObj;
        numStudents = stNum;

        students = new Student[numStudents];
        for (int i = 0; i < numStudents; i++)
        {
            students[i] = std[i];
        }

        int len = 0;
        while (name[len] != '\0')
            len++;

        courseName = new char[len + 1];

        int i = 0;
        while (name[i] != '\0')
        {
            courseName[i] = name[i];
            i++;
        }
        courseName[i] = '\0';
    }

    // Copy constructor
    Course(const Course &obj)
    {
        instructor = obj.instructor;
        numStudents = obj.numStudents;

        students = new Student[numStudents];
        for (int i = 0; i < numStudents; i++)
        {
            students[i] = obj.students[i];
        }

        int len = 0;
        while (obj.courseName[len] != '\0')
            len++;

        courseName = new char[len + 1];

        int i = 0;
        while (obj.courseName[i] != '\0')
        {
            courseName[i] = obj.courseName[i];
            i++;
        }
        courseName[i] = '\0';
    }

    // Assignment operator
    Course &operator=(const Course &obj)
    {

        delete[] courseName;
        delete[] students;

        instructor = obj.instructor;
        numStudents = obj.numStudents;

        students = new Student[numStudents];
        for (int i = 0; i < numStudents; i++)
        {
            students[i] = obj.students[i];
        }

        // Copy new data for courseName
        int len = 0;
        while (obj.courseName[len] != '\0')
            len++;

        courseName = new char[len + 1];

        int i = 0;
        while (obj.courseName[i] != '\0')
        {
            courseName[i] = obj.courseName[i];
            i++;
        }
        courseName[i] = '\0';

        return *this;
    }

    // Destructor
    ~Course()
    {
        delete[] courseName;
        delete[] students;
    }

    // Setter for courseName
    void setCourseName(const char *name)
    {

        delete[] courseName;

        int len = 0;
        while (name[len] != '\0')
            len++;

        courseName = new char[len + 1];

        int i = 0;
        while (name[i] != '\0')
        {
            courseName[i] = name[i];
            i++;
        }
        courseName[i] = '\0';
    }

    // Getter for courseName
    char *getCourseName()
    {
        return courseName;
    }

    // Display function

    void displayCourse()
    {
        cout << "Course Name: " << courseName << endl;
        cout << "Instructor Information:" << endl;
        instructor.displayInstructor();
        cout << "Students Enrolled:" << endl;
        for (int i = 0; i < numStudents; ++i)
        {
            students[i].displayStudent();
            cout << endl;
        }
    }
};

int main()
{
    Student stdObj[2];
    stdObj[0] = Student("Daniyal", "26", "Lahore");
    stdObj[1] = Student("Danish", "11", "Karachi");

    Instructor instructor("Dr Babar", "Ph.D. in Computer Science");

    Course courseObj("Introduction to Programming", instructor, stdObj, 2);
    courseObj.displayCourse();

    return 0;
}
