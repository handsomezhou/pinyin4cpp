#ifndef HANYUPINYINVCHARTYPE_H
#define HANYUPINYINVCHARTYPE_H
#include <QString>

/**
 * The option indicates that the output of 'ü' is "u:"
 */
static const QString  HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_AND_COLON= "WITH_U_AND_COLON";
/**
 * The option indicates that the output of 'ü' is "v"
 */
static const QString  HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_V="WITH_V";
/**
 * The option indicates that the output of 'ü' is "ü" in Unicode form
 */
static const QString HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_UNICODE="WITH_U_UNICODE";


class HanyuPinyinVCharType{
public:
    HanyuPinyinVCharType();
    HanyuPinyinVCharType(QString name);
    QString getName();
    void setName(QString name);
private:
    QString name;
};
#endif // HANYUPINYINVCHARTYPE_H
