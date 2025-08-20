#include <iostream>
#include <memory>
using namespace std;

class Project{
    private:
        string projectName;
    public:
        void setProjectName(const string &project_name){
            projectName = project_name;
        }

        void showProjectDetails() const{
            cout << "[Project Name ] : " << projectName << endl;
        }

};

class Employee{
    private:
        // Project *projectPtr = new Project{};
        shared_ptr<Project> projectPtr{new Project{}};
    
    public:
        void setProject(shared_ptr<Project> &ptr){
            projectPtr = ptr;
        }
        const shared_ptr<Project> getProject() const{
            return projectPtr;
        }
};

void showInfo(shared_ptr<Employee> &empPtr){
    cout <<"Employee Project Details "  ;
    empPtr->getProject()->showProjectDetails();
}

int main(){

    shared_ptr<Project> prj{new Project{}};
    prj->setProjectName("Video Recoreder");

    shared_ptr<Employee> e1{new Employee{}};
    e1->setProject(prj);

    shared_ptr<Employee> e2{new Employee{}};
    e2->setProject(prj);

    shared_ptr<Employee> e3{new Employee{}};
    e3->setProject(prj);

    showInfo(e1);
    showInfo(e2);
    showInfo(e3);

    return 0;
}