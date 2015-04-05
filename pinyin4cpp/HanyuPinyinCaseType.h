#ifndef HANYUPINYINCASETYPE_H
#define HANYUPINYINCASETYPE_H
#include<QString>

/**
* The option indicates that hanyu pinyin is outputted as uppercase letters
*/
  static const QString HAN_YU_PIN_YIN_CASE_TYPE_UPPERCASE = "UPPERCASE";

/**
* The option indicates that hanyu pinyin is outputted as lowercase letters
*/
   static QString HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE = "LOWERCASE";

class HanyuPinyinCaseType{
public:
    HanyuPinyinCaseType();
    HanyuPinyinCaseType(QString name);
    QString getName();
    void setName(QString name);
private:
    QString name;
};

#endif // HANYUPINYINCASETYPE_H
