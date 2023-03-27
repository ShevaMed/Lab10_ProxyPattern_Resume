#include "realresume.h"


RealResume::RealResume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
                       QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes)
    : Resume(firstName, lastName, phone, email, education, expereinceDes)
{

}

RealResume::~RealResume()
{

}

void RealResume::uploadResume()
{
    _status = "Upload Resume is succeed!";
}
