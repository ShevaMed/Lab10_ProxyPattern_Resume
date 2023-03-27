#include "proxyresume.h"


ProxyResume::ProxyResume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
                         QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes)
    : Resume(firstName, lastName, phone, email, education, expereinceDes)
{

}

ProxyResume::~ProxyResume()
{
    delete realResume;
}

void ProxyResume::uploadResume()
{
    if (isValidData())
    {
        if (!realResume)
            realResume = new RealResume(_firstName, _lastName, _phone, _email, _education, _expereinceDes);

        realResume->uploadResume();

        _status = realResume->getStatus();
        countAttempt = 0;
    }
    else
        ++countAttempt;
}

bool ProxyResume::isValidData()
{
    QString border = "border: 1px solid red;";

    if (_firstName->text().size() < 3) {
        _firstName->setStyleSheet(border);
        _status = "First Name is not valid!";
    }
    else if (_lastName->text().size() < 3) {
        _lastName->setStyleSheet(border);
        _status = "Last Name is not valid!";
    }
    else if (_phone->text().size() < 19) {
        _phone->setStyleSheet(border);
        _status = "Phone is not valid!";
    }
    else if (_email->text().size() < 10) {
        _email->setStyleSheet(border);
        _status = "Email is not valid!";
    }
    else if (_education->text().size() < 25) {
        _education->setStyleSheet(border);
        _status = "Education is not valid!";
    }
    else if (_expereinceDes->text().size() < 50) {
        _expereinceDes->setStyleSheet(border);
        _status = "Expereince / Description is not valid!";
    }
    else
        return true;

    return false;
}

