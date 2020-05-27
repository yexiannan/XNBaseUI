//
//  XNViewController.m
//  XNBaseUI
//
//  Created by yexiannan on 12/06/2019.
//  Copyright (c) 2019 yexiannan. All rights reserved.
//

#import "XNViewController.h"
#import "XNBaseUI.h"

@interface XNViewController ()

@end

@implementation XNViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    XNButton *button = [XNButton new];
//    button.buttonTitle(@"ssss", UIControlStateNormal).buttonTitleFont(MFont(12)).imagePosition(UIRectEdgeTop).titleColor([UIColor whiteColor], UIControlStateNormal).backgroundImage([UIImage imageWithColor:[UIColor grayColor]], UIControlStateNormal);
    button.frame = CGRectMake(100, 100, 100, 100);
    [self.view addSubview:button];

    UIButton *btn = [UIButton new];
    btn.buttonTitle(@"gg", UIControlStateNormal).buttonTitleFont(MFont(16));
    
}

- (void)ppp {
    NSLog(@"-----respond action");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
