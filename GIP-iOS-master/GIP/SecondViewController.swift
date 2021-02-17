//
//  SecondViewController.swift
//  GIP
//
//  Created by EndoMotoki on 2018/04/28.
//  Copyright © 2018年 EndoMotoki. All rights reserved.
//

import UIKit
import WebKit
import StoreKit
import GoogleMobileAds



class SecondViewController: UIViewController,WKUIDelegate,WKNavigationDelegate,GADBannerViewDelegate {
    
    var webView: WKWebView!
    var activityIndicator: UIActivityIndicatorView!
    var bannerView: GADBannerView!
    //    let statusBarHeight = UIApplication.shared.statusBarFrame.height
    
    @IBAction func back(_ sender: Any) {
        self.webView?.goBack()
    }
    override func loadView() {
        //if #available(iOS 10.3,*) {
        //    SKStoreReviewController.requestReview()
        //}
        super.loadView()
        let webConfiguration = WKWebViewConfiguration()
        webView = WKWebView(frame: .zero,configuration:webConfiguration)
        webView.uiDelegate = self
        webView.navigationDelegate = self
        self.view = webView
        webView.allowsBackForwardNavigationGestures = true
        if #available(iOS 9.0, *) {
            WKWebsiteDataStore.default().removeData(ofTypes: WKWebsiteDataStore.allWebsiteDataTypes(), modifiedSince: Date(timeIntervalSince1970:0), completionHandler: {})
        }
        activityIndicator = UIActivityIndicatorView()
        activityIndicator.frame = CGRect(x: 0, y: 0, width: 50, height: 50)
        // 画面中央に設定
        activityIndicator.center = CGPoint(x: UIScreen.main.bounds.size.width/2, y: UIScreen.main.bounds.size.height/2)
        // インジケータを停止している際は非表示にするように設定
        activityIndicator.hidesWhenStopped = true
        // インジケータのスタイル設定
        activityIndicator.activityIndicatorViewStyle = UIActivityIndicatorViewStyle.gray
        self.view.addSubview(activityIndicator)
        
    }
    
    func webView(_ webView: WKWebView, didStartProvisionalNavigation navigation: WKNavigation!) {
        // クルクル開始
        activityIndicator.startAnimating()
    }
    
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        // クルクル終了
        activityIndicator.stopAnimating()
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        bannerView = GADBannerView(adSize: kGADAdSizeBanner)
        addBannerViewToView(bannerView)
        bannerView.adUnitID = "ca-app-pub-3350766982337275/4796753731"
        bannerView.rootViewController = self
        bannerView.load(GADRequest())
        bannerView.delegate = self
        let url = URL(string:"https://gip-ios.xmilkyway.com")
        let request = URLRequest(url: url!)
        webView.load(request)
    }
    
    func addBannerViewToView(_ bannerView: GADBannerView) {
        bannerView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(bannerView)
        view.addConstraints(
            [NSLayoutConstraint(item: bannerView,
                                attribute: .bottom,
                                relatedBy: .equal,
                                toItem: bottomLayoutGuide,
                                attribute: .top,
                                multiplier: 1,
                                constant: 0),
             NSLayoutConstraint(item: bannerView,
                                attribute: .centerX,
                                relatedBy: .equal,
                                toItem: view,
                                attribute: .centerX,
                                multiplier: 1,
                                constant: 0)
            ])
    }
    
    /// Tells the delegate an ad request loaded an ad.
    func adViewDidReceiveAd(_ bannerView: GADBannerView) {
        print("adViewDidReceiveAd")
    }
    
    /// Tells the delegate an ad request failed.
    func adView(_ bannerView: GADBannerView,
                didFailToReceiveAdWithError error: GADRequestError) {
        print("adView:didFailToReceiveAdWithError: \(error.localizedDescription)")
    }
    
    /// Tells the delegate that a full-screen view will be presented in response
    /// to the user clicking on an ad.
    func adViewWillPresentScreen(_ bannerView: GADBannerView) {
        print("adViewWillPresentScreen")
    }
    
    /// Tells the delegate that the full-screen view will be dismissed.
    func adViewWillDismissScreen(_ bannerView: GADBannerView) {
        print("adViewWillDismissScreen")
    }
    
    /// Tells the delegate that the full-screen view has been dismissed.
    func adViewDidDismissScreen(_ bannerView: GADBannerView) {
        print("adViewDidDismissScreen")
    }
    
    /// Tells the delegate that a user click will open another app (such as
    /// the App Store), backgrounding the current app.
    func adViewWillLeaveApplication(_ bannerView: GADBannerView) {
        print("adViewWillLeaveApplication")
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

