//
//  UIView+frame.h
//  CommonCode
//
//  Created by jinlong sheng on 2018/4/16.
//  Copyright © 2018年 sjl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (frame)
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;


@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat left;

@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@end
