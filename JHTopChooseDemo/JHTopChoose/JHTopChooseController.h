//
//  JHTopChooseController.h
//
//  Created by 徐仲平 on 16/4/9.
//  Copyright © 2016年 徐仲平. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JHTopChooseController : UIViewController

@property (nonatomic,strong)NSArray<UIViewController *> *subChildViewController;

/** 默认的标题颜色 */
@property (nonatomic,strong)UIColor *titleColor;

/** 选中的标题颜色 */
@property (nonatomic,strong)UIColor *selectedTitleColor;

/** 指示器颜色 */
@property (nonatomic,strong)UIColor *indicatorColor;

/** 屏幕一页最多显示多少个标签 */
@property (nonatomic,assign)NSUInteger maxTitleCount;

/**
 *  添加到需要显示的控制器
 *
 *  @param controller 需要显示的控制器
 */
-(void)addToController:(UIViewController *)controller;

@end

@interface UIView (JHExtension)
@property (nonatomic,assign)CGFloat jh_width;
@property (nonatomic,assign)CGFloat jh_height;
@property (nonatomic,assign)CGFloat jh_x;
@property (nonatomic,assign)CGFloat jh_y;
@property (nonatomic,assign)CGSize  jh_size;
@property (nonatomic,assign)CGPoint jh_origin;
@property (nonatomic,assign)CGFloat jh_centerX;
@property (nonatomic,assign)CGFloat jh_centerY;

@end


