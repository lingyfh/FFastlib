//
//  FFViewController.m
//  FFastlib
//
//  Created by lingyfh on 07/05/2016.
//  Copyright (c) 2016 lingyfh. All rights reserved.
//

#import "FFViewController.h"
@import FFastlib;

@interface FFViewController ()

@end

@implementation FFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIView *cornerRView = [[UIView alloc] initWithFrame:CGRectMake(20, 20, 200, 200)];
    [cornerRView setBackgroundColor:[UIColor blueColor]];
    [self.view addSubview:cornerRView];
    [cornerRView setCornerRadius:10];
    
    PLog(@"CurrentLanguage = %@", FFCurrentLanguage);
    PLog(@"sys name = %@", FFSysName);
    
    
    UIImageView *imgView = [[UIImageView alloc] initWithFrame:CGRectMake(20, 240, 200, 200)];
    [self.view addSubview:imgView];
    [imgView sd_setImageWithURL:[NSURL URLWithString:@"http://img0.adesk.com/download/58b6b782e7bce768222f288c"]];
	// Do any additional setup after loading the view, typically from a nib.
    
    NSDictionary *dict = @{@"key": @"value"};
    NSString *str = [JSONParse dictToNSString:dict];
    NSLog(@"string = %@", str);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
