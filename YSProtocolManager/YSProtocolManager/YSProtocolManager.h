//
//  YSProtocolManager.h
//  YSProtocolManager
//
//  Created by 牛投邦 on 2017/1/11.
//  Copyright © 2017年 牛投邦. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YSProtocolManager : NSObject

+ (void)registServiceProvide:(id)provide forProtocol:(Protocol*)protocol;

+ (id)serviceProvideForProtocol:(Protocol *)protocol;

@end
