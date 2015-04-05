#ifndef HANYUPINYINTONETYPE_H
#define HANYUPINYINTONETYPE_H
#include <QString>

/**
 * The option indicates that hanyu pinyin is outputted with tone numbers
 */
 static const QString HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_NUMBER = "WITH_TONE_NUMBER";

/**
 * The option indicates that hanyu pinyin is outputted without tone numbers
 * or tone marks
 */
 static const QString HAN_YU_PIN_YIN_TONE_TYPE_WITHOUT_TONE = "WITHOUT_TONE";

/**
 * The option indicates that hanyu pinyin is outputted with tone marks
 */
 static const QString HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_MARK ="WITH_TONE_MARK";

class HanyuPinyinToneType{
public:
    HanyuPinyinToneType();
    HanyuPinyinToneType(QString name);
    QString getName();
    void setName(QString name);
private:
    QString name;
};
#endif // HANYUPINYINTONETYPE_H
