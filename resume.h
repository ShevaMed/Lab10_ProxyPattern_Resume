#ifndef RESUME_H
#define RESUME_H

#include <QLineEdit>

class Resume
{
protected:
    QLineEdit *_firstName, *_lastName, *_phone, *_email, *_education, *_expereinceDes;
    QString _status;
    int countAttempt = 0;

public:
    Resume(QLineEdit *firstName, QLineEdit *lastName, QLineEdit *phone,
           QLineEdit *email, QLineEdit *education, QLineEdit *expereinceDes);
    virtual ~Resume();

    virtual void uploadResume() = 0;

    int getCountAttempt() const;
    QString getStatus() const;
};

#endif // RESUME_H
