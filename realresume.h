#ifndef REALRESUME_H
#define REALRESUME_H

#include "resume.h"

class RealResume : public Resume
{
public:
    RealResume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
               QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes);
    ~RealResume() override;

    void uploadResume() override;
};

#endif // REALRESUME_H
