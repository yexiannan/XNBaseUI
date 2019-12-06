//
//  XNButton.h
//  XNUtils
//
//  Created by Luigi on 2019/7/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (XNButton)
+ (UIButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(nullable id)taget Action:(nullable SEL)action;

#pragma mark -
- (UIButton *(^)(NSString *, UIControlState))title;
- (UIButton *(^)(UIColor *, UIControlState))titleColor;
- (UIButton *(^)(UIFont *))titleFont;
- (UIButton *(^)(UIImage *, UIControlState))image;
- (UIButton *(^)(UIImage *, UIControlState))backgroundImage;
- (UIButton *(^)(id, SEL, UIControlEvents))addTargetAction;
@end

@interface XNButton : UIButton
/**
 图片位置
 */
@property (nonatomic, assign) UIRectEdge buttonImagePosition;
+ (XNButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(nullable id)taget Action:(nullable SEL)action;

#pragma mark -
- (XNButton *(^)(UIRectEdge))imagePosition;


@end

NS_ASSUME_NONNULL_END
