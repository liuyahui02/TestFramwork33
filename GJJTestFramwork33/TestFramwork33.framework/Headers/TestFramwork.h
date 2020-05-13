//
//  TestFramwork.h
//  TestFramwork
//
//  Created by yahui liu on 2020/5/11.
//  Copyright © 2020 yahui. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestFramwork : NSObject
//实例化
+ (TestFramwork *) sharedInstance;
- (void)login;

@end

NS_ASSUME_NONNULL_END
