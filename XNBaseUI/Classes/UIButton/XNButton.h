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
- (UIButton *(^)(NSString *, UIControlState))buttonTitle;
- (UIButton *(^)(UIColor *, UIControlState))buttonTitleColor;
- (UIButton *(^)(NSAttributedString *, UIControlState))buttonAttributedString;
- (UIButton *(^)(UIFont *))buttonTitleFont;
- (UIButton *(^)(UIImage *, UIControlState))buttonImage;
- (UIButton *(^)(UIImage *, UIControlState))buttonBackgroundImage;
- (UIButton *(^)(id, SEL, UIControlEvents))buttonAddTargetAction;

@end

@interface XNButton : UIButton
@property (nonatomic) CGSize touchSize;//扩大按钮点击范围
/**
 图片位置
 */
@property (nonatomic, assign) UIRectEdge buttonImagePosition;
+ (XNButton *)newButtonWithBackgroundImage:(nullable UIImage *)image TitleNormalColor:(UIColor *)titleNormalColor Font:(UIFont *)font TitleNormal:(NSString *)titleNormal Taget:(nullable id)taget Action:(nullable SEL)action;

#pragma mark -
- (XNButton *(^)(NSString *, UIControlState))buttonTitle;
- (XNButton *(^)(UIColor *, UIControlState))buttonTitleColor;
- (XNButton *(^)(NSAttributedString *, UIControlState))buttonAttributedString;
- (XNButton *(^)(UIFont *))buttonTitleFont;
- (XNButton *(^)(UIImage *, UIControlState))buttonImage;
- (XNButton *(^)(UIImage *, UIControlState))buttonBackgroundImage;
- (XNButton *(^)(id, SEL, UIControlEvents))buttonAddTargetAction;
- (XNButton *(^)(UIRectEdge))imagePosition;


@end

NS_ASSUME_NONNULL_END
