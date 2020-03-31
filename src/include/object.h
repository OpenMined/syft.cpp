#include <string>
#include <list>

using namespace std;

class AbstractObject {
    public:
        // public methods
        AbstractObject* describe(string description);
        virtual string show() const;

        // destructor
        ~AbstractObject();

    protected:
        // attributes
        int id;
        string owner;
        string description;
        list <string> tags;
        AbstractObject* child;

        // private methods
        friend std::ostream& operator<<(std::ostream&, const AbstractObject&);

};
