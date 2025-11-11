#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
#include <iostream>
#include "person_h"
using namespace std;
class person{
    private:
    String name;
    int id;
    public:
    person(){
        name="";
        id=0;
    }
    person(String n, int i){
        name=n;
        id=i;
    }
    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
    }
    void setname(){
        name=n;
    }
    void setid(){
        id=i;
    }
    String getname(){
        return name;
    }
    int getid(){
        return id;
    }
    ~person(){
}
};
class student:public person{
    private:
    int yearlevel;
    String major;
    public:
    
    student():person(){
        yearlevel=0;
        major="";
        }
        student(int yl,String m):person(n,i){
            yearlevel=yl;
            major=m;
        }
        void setyearlevel(){
            yearlevel=yl;
        }
    void setmajor(){
        major=m;
    }
        int getyearlevel(){
            return yearlevel;
        }
        String getmajor(){
            return major;
        }
        void person::display(){
        cout<<yearlevel<<endl;
        cout<<major<<endl;
    }
    ~student():person(){
        }
};
        class instructor{
            private:
            String department;
            int experienceYears;
            public:
            instructor():person(){
                department="";
                experienceYears=0;
            }
            instructor(String d,int expy):person(n,i){
                department=d;
                experienceYears=expy;
            }
              void person:: display(){
        cout<<department
        cout<<experienceYears
    }
    void setdepartment(){
        department=d;
    }
     void setexperinceyear(){
         experienceYears=expy;
     }
     string getdepartment(){
         return department;
     }
      int getexperinceyear(){
          return experienceYears;
      }
    ~instructor():person(){
        }
            
        };
        
        class course{
            private:
            String coursecode;
            String coursename;
            int maxstudents;
            student* students;
            int currentstudents
            public:
            course(){
                coursecode="";
                coursename="";
                maxstudents=0;
                students=nullptr;
                currentstudents=0;
          }
          course(String cc,String cn,int ms,student* st,int cs){
              coursecode=cc;
              coursename=cn;
              maxstudents=ms;
              student st = new student[currentstudents];
              currentstudents=cs;
          }
          void addstudent(const student& s){
              for(int i= 0;i<currentstudents;i++){
                  st[currentstudents+1]= s;
                  
              }
          }
          void displaycourseinfo(){
              cout<<coursecode<<endl;
              cout<<coursename<<endl;
              cout<<maxstudents<<endl;
              cout<<currentstudents<<endl;
          }
           void setcoursename(){
               coursename=cn
           }
            void setcousencode(){
                coursecode=cc;
            }
            void setmaxstudents(){
                maxstudents=ms;
            }
            void setcurrentstudents(){
                currentstudents= cs;
            }
             String getcoursename(){
                 return coursename;
             }
             String getcoursecode(){
                 return coursecode;
             }
             
            int getmaxstudents(){
                return maxstudents;
            }
            int getcurrentstudents(){
                return currentstudents;
            }
          
        }



int main()
{
    student s;
    instructor i;
    course c;
    
   

    return 0;
}








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
