#include <QString>
#include <QRegExp>
#include "PinyinFormatter.h"
#include "HanyuPinyinOutputFormat.h"
#include "HanyuPinyinToneType.h"

QString PinyinFormatter::formatHanyuPinyin(QString pinyinStr, HanyuPinyinOutputFormat *outputFormat)
{
    QString pattern("[1-5]");
    QRegExp rx(pattern);
    return pinyinStr.replace(rx,"");
//    if((NULL==pinyinStr)||NULL==outputFormat){
//        return pinyinStr;
//    }

//    if ((HanyuPinyinToneType::WITH_TONE_MARK == outputFormat.getToneType())&&((HanyuPinyinVCharType::WITH_V == outputFormat.getVCharType()) || (HanyuPinyinVCharType::WITH_U_AND_COLON == outputFormat.getVCharType())))
//    {
//       // throw new BadHanyuPinyinOutputFormatCombination("tone marks cannot be added to v or u:");
//        return pinyinStr;
//    }

    /*
    if (HanyuPinyinToneType.WITHOUT_TONE == outputFormat.getToneType())
    {
        pinyinStr = pinyinStr.replaceAll("[1-5]", "");
    } else if (HanyuPinyinToneType.WITH_TONE_MARK == outputFormat.getToneType())
    {
        pinyinStr = pinyinStr.replaceAll("u:", "v");
        pinyinStr = convertToneNumber2ToneMark(pinyinStr);
    }

    if (HanyuPinyinVCharType.WITH_V == outputFormat.getVCharType())
    {
        pinyinStr = pinyinStr.replaceAll("u:", "v");
    } else if (HanyuPinyinVCharType.WITH_U_UNICODE == outputFormat.getVCharType())
    {
        pinyinStr = pinyinStr.replaceAll("u:", "ü");
    }

    if (HanyuPinyinCaseType.UPPERCASE == outputFormat.getCaseType())
    {
        pinyinStr = pinyinStr.toUpperCase();
    }
    */
    //return pinyinStr;

}
