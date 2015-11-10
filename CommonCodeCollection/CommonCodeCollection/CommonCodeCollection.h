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
//rgb转换
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


//是否是4寸屏幕  ip5 ip5s
#define isFourInch ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

//5s 之后 包括6、 6plus、 6s、 6sPlus
#define iPhone5SLater [[UIScreen mainScreen] currentMode].size.width>640.0f

//ios7 之后的系统
#define IOS7_OR_LATER   ( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )

//获取屏幕宽高
#define ScreenHeight [UIScreen mainScreen].bounds.size.height
#define ScreenWidth [UIScreen mainScreen].bounds.size.width



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

+ (NSString*)getFileMD5WithPath:(NSString*)path;


/*
 原图片比例生成缩略图
 */
+ (UIImage *)thumbnailWithImageWithoutScale:(UIImage *)image size:(CGSize)asize;




/*
 只做删除文件操作。
 */
+ (void)deleteFile:(NSString *)path;


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
