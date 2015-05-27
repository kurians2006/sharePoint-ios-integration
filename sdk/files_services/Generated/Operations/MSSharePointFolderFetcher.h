/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSSharePointItemFetcher;
@class MSSharePointItemCollectionFetcher;
@class MSSharePointFolderOperations;
@class MSSharePointFolderFetcher;

#import <core/core.h>
#import "MSSharePointModels.h"

/**
* The header for type MSSharePointFolderFetcher.
*/

@protocol MSSharePointFolderFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSSharePointFolder *folder, MSOrcError *error))callback;
- (MSSharePointFolderFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSSharePointFolderFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSSharePointFolderFetcher *)select:(NSString *)params;
- (MSSharePointFolderFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSSharePointFolderOperations *operations;

@end

@interface MSSharePointFolderFetcher : MSOrcEntityFetcher<MSSharePointFolderFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSSharePointFolder *)folder callback:(void(^)(MSSharePointFolder *folder, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=children) MSSharePointItemCollectionFetcher *children;

- (MSSharePointItemFetcher *)getChildrenById:(NSString*)id;


@end