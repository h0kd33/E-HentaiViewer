//
//  QJIntroInfoModel.h
//  ExReadViewer
//
//  Created by 覃江 on 2016/12/28.
//  Copyright © 2016年 茅野瓜子. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QJCategoryButtonInfo : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *url;

@end

@interface QJIntroInfoModel : NSObject

@property (strong, nonatomic) NSString *baseUrl;
@property (strong, nonatomic) NSDictionary *introDict;//简介信息
@property (strong, nonatomic) NSArray *tagArr;//tag信息
@property (strong, nonatomic) NSArray *commentsArr;//评论信息
@property (strong, nonatomic) NSMutableArray *allImageUrlArr;//缩略图
@property (assign, nonatomic) NSInteger requestCount;//总数
@property (assign, nonatomic) BOOL needUser;//有问题的判断需要进一步处理

- (instancetype)initWithData:(NSData *)data;
- (NSMutableArray *)getAllImageWithData:(NSData *)data;

@end
