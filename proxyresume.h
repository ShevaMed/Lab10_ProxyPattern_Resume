#ifndef PROXYRESUME_H
#define PROXYRESUME_H

#include "realresume.h"

class ProxyResume : public Resume
{
    RealResume *realResume;

public:
    ProxyResume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
                QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes);
    ~ProxyResume() override;

    void uploadResume() override;

    bool isValidData();
};

#endif // PROXYRESUME_H
