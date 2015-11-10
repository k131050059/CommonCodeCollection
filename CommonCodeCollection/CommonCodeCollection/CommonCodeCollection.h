//
//  CommonCodeCollection.h
//  CommonCodeCollection
//
//  Created by jinlong sheng on 15/11/10.
//  Copyright © 2015年 sjl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CommonCodeCollection : NSObject

/*

 时间格式化  对NSDate 的处理
 
*/

//判断NSDate 是几几年
+ (NSInteger)getYear:(NSDate *)date;

//判断NSDate 是多少月
+ (NSString *)getMonth:(NSDate *)_date;

//判断NSDate是周几，
+ (NSString *)getWeekDay:(NSDate *)date;

//NSDate  转yyyy-MM-dd
+ (NSString *)getYMD:(NSDate *)date;

//判断NSDate 距离现在的时间  *年前 *月前 *天前  小时 分钟
+ (NSString *)getTimeStr:(NSDate *)_date;

//字符串日期处理成时间戳   如：2015-06-26_12:00:00 to time interval since 1970
+(long long)timeStringToInterval:(NSString *)timeString;

//时间戳处理成字符串日期   如： time interval since 1970 to 2015-06-26_12:00:00
+(NSString *)timeIntervalToString:(long long)timeInterval;


/*
 获取字符串 NSData 的MD5  某个路径的MD5
*/

+ (NSString*)getmd5WithString:(NSString *)string;

+ (NSString*)getMD5WithData:(NSData *)data;

+(NSString*)getFileMD5WithPath:(NSString*)path;



/*
 原图片比例生成缩略图
 */
+ (UIImage *)thumbnailWithImageWithoutScale:(UIImage *)image size:(CGSize)asize;


//
//
//
//
//
//
//
//
//
//
//
//
//


@end
