#include <list>
#include <string>

#include "worker.h"
#include "objectPointer.h"
#include "tensor.h"

using namespace std;

class BaseWorker : public AbstractWorker
{
 public:
  // constructor
  BaseWorker();

  // destructor
  ~BaseWorker();

  // methods
  ObjectPointer* send(AbstractTensor* obj, BaseWorker* workers, int ptr_id, bool garbage_collect_data, bool requires_grad, bool create_pointer);
  virtual string show() const;
  

  protected:
  // attributes
    int id;
    string hook;
    string data;
    bool is_client_worker;
    bool log_msgs;
    bool verbose;
    bool auto_add;
    float message_pending_time;
};
