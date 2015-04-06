/*
 * Copyright  [handsomezhou & Li Min] 2015 Convert Chinese characters to Pinyin.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PinyinHelper.h"
#include "ChineseToPinyinResource.h"

PinyinHelper::PinyinHelper()
{

}

/**
* Get all Hanyu Pinyin presentations of a single Chinese character (both
* Simplified and Tranditional)
*
* <p>
* For example, <br/> If the input is '间', the return will be an array with
* two Hanyu Pinyin strings: <br/> "jian1" <br/> "jian4" <br/> <br/> If the
* input is '李', the return will be an array with single Hanyu Pinyin
* string: <br/> "li3"
*
* <p>
* <b>Special Note</b>: If the return is "none0", that means the input
* Chinese character is in Unicode CJK talbe, however, it has no
* pronounciation in Chinese
*
* @param ch
*            the given Chinese character
* @param outputFormat
*            describes the desired format of returned Hanyu Pinyin String
*
* @return a String list contains all Hanyu Pinyin presentations with tone
*         numbers; return list size equal zero for non-Chinese character
*
*
* @see HanyuPinyinOutputFormat
*
*/
void PinyinHelper::toHanyuPinyinStringArray(QChar ch, HanyuPinyinOutputFormat *outputFormat, QList<QString> *pinyinList)
{
    if((NULL==outputFormat)||(NULL==pinyinList)){
        return;
    }

    PinyinHelper::getFormattedHanyuPinyinStringArray(ch,outputFormat,pinyinList);
}

void  PinyinHelper::getFormattedHanyuPinyinStringArray(QChar ch, HanyuPinyinOutputFormat *outputFormat, QList<QString> *pinyinList)
{
    if((NULL==outputFormat)||(NULL==pinyinList)){
        return;
    }

    PinyinHelper::getUnformattedHanyuPinyinStringArray(ch,pinyinList);

    int pinyinListSize=pinyinList->size();
    if(pinyinListSize>0){
        for(int i=0; i<pinyinListSize;i++){
           // pinyinList->;
        }
    }

}

void  PinyinHelper::getUnformattedHanyuPinyinStringArray(QChar ch, QList<QString> *pinyinList)
{
    ChineseToPinyinResource::getInstance()->getHanyuPinyinStringArray(ch,pinyinList);
}

