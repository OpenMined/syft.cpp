#include <string>
#include <list>

using namespace std;

class Object {
    public:        
        Object* describe(string description);

    private:
        int id;
        string owner;
        string description;
        list <string> tags;
        Object* child;
        friend std::ostream& operator<<(std::ostream&, const Object&);
};
