//
//  ViewController.m
//  ZyzRequestDemo
//
//  Created by apple on 2017/2/21.
//  Copyright © 2017年 张玉泽. All rights reserved.
//

#import "ViewController.h"
#import "ZyzRequest.h"

@interface ViewController ()
@property (nonatomic, weak) IBOutlet UILabel *resultMessageLabelView;
@end

static NSString * const urlString2 = @"https://commtest.shuhaixinxi.com/community/appVersion/vno";

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self ZyzRequestGetData:urlString2];
}

- (void)ZyzRequestGetData:(NSString *)urlString  {
    
    NSDictionary *dictionary = @{
//                                 @"app_key" : urlString,
                                 @"identifier"       :   @"1"
                                 };
    [ZyzRequest zyzPOST:urlString parameters:dictionary isEncrypt:NO zyzResultSuccess:^(NSURLSessionDataTask * _Nonnull task, id  _Nonnull resultObject) {
        self.resultMessageLabelView.text = @"请求成功...";
    } zyzResultError:^(NSURLSessionDataTask * _Nonnull task, NSError * _Nonnull error, NSString * _Nonnull errorMessage) {
        NSLog(@"%@", errorMessage);
        self.resultMessageLabelView.text = errorMessage;
    }];
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
