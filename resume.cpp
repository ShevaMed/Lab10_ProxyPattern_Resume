#include "resume.h"


Resume::Resume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
               QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes)
    : _firstName(firstName), _lastName(lastName), _phone(phone),
    _email(email), _education(education), _expereinceDes(expereinceDes)
{

}

Resume::~Resume()
{

}

int Resume::getCountAttempt() const
{
    return countAttempt;
}

QString Resume::getStatus() const
{
    return _status;
}
