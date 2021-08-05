#include <string>
#include <ctime>

using namespace std;

class Course
{
public:
    void setCode(const string &code) { code_ = code; }
    string getCode() const { return code_; }
    void setName(const string &name) { name_ = name; }
    string getName() const { return name_; }
    void setDescription(const string &description)
    {
        description_ = description;
    }
    string getDescription() const { return description_; }
    void setStartDate(time_t start_date) { start_date_ = start_date; }
    time_t getStartDate() const { return start_date_; }
    void setEndDate(time_t end_date) { end_date_ = end_date; }
    time_t getEndDate() const { return end_date_; }
private:
    string code_;
    string name_;
    string description_;
    time_t start_date_;
    time_t end_date_;
};