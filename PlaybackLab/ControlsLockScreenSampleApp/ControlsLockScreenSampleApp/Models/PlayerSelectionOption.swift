//
//  PlayerSelectionOption.swift
//  ControlsLockScreenSampleApp
//
//  Copyright © 2017 Ooyala. All rights reserved.
//

import Foundation

class PlayerSelectionOption: NSObject {
  
  public private(set) var domain: OOPlayerDomain
  
  public private(set) var pcode: String
  
  public private(set) var embedCode: String
  
  public private(set) var title: String
  
  public private(set) var thumbnailURL: URL
  
  public private(set) weak var embedTokenGenerator: OOEmbedTokenGenerator?
  
  init(pcode: String, embedCode: String, title: String, thumbnailURL: URL, domain: OOPlayerDomain) {
    self.domain = domain
    self.pcode = pcode
    self.embedCode = embedCode
    self.title = title
    self.thumbnailURL = thumbnailURL
    super.init()
  }
  
  convenience init(pcode: String, embedCode: String, title: String, thumbnailURL: URL, domain: OOPlayerDomain, embedTokenGenerator: OOEmbedTokenGenerator) {
    self.init(pcode: pcode, embedCode: embedCode, title: title, thumbnailURL: thumbnailURL, domain: domain)
    self.embedTokenGenerator = embedTokenGenerator
  }
  
}
