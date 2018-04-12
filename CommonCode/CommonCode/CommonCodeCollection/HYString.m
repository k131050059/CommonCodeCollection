//
//  HYString.m
//  CommonCode
//
//  Created by jinlong sheng on 2018/4/12.
//  Copyright © 2018年 sjl. All rights reserved.
//

#import "HYString.h"

@implementation HYString

+(NSString *)removeNoUseCharOfString:(NSString *)str{
    NSCharacterSet *set = [NSCharacterSet characterSetWithCharactersInString:@"@／：；（）¥「」＂、[]{}#%-*+=_\\|~＜＞$€^•'@#$%^&*()_+'\""];
    NSString *temp = [[str componentsSeparatedByCharactersInSet:set] componentsJoinedByString:@""];
    temp = [temp stringByReplacingOccurrencesOfString:@" " withString:@""];
    return temp;
    
/*
 在电话号码过滤的时候 国外的电话号 有滤不掉的特殊字符 可以用提取数字的方法
    NSString *pureNumbers = [[str componentsSeparatedByCharactersInSet:[[NSCharacterSet characterSetWithCharactersInString:@"0123456789"] invertedSet]] componentsJoinedByString:@""];
 */
    
}




@end
