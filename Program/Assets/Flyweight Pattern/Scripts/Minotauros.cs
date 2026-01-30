using System.Collections;
using UnityEngine;

public class Minotauros : MonoBehaviour
{
    private Coroutine coroutine;

    [SerializeField] Animator animator;
    [SerializeField] AnimatorStateInfo animatorStateInfo;

    private void Awake()
    {
        animator = GetComponent<Animator>();

        animatorStateInfo = animator.GetCurrentAnimatorStateInfo(0);

        AnimatorClipInfo[] clipInfos =  animator.GetCurrentAnimatorClipInfo(0);

        for(int i = 0; i < clipInfos.Length; i++)
        {
            Debug.Log(clipInfos[i].clip.name);
        }
    }

    private void Start()
    {
        coroutine = StartCoroutine(Smash()); 
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if(coroutine != null)
            {
                StopCoroutine(coroutine);
            }

            coroutine = StartCoroutine(Paranoia());
        }
    }

    private IEnumerator Smash()
    {
        animator.SetTrigger("Smash");

        AnimatorClipInfo[] animatorClipInfo = animator.GetCurrentAnimatorClipInfo(0);

        yield return CoroutineCache.GetCachedWait(animatorClipInfo[0].clip.length);
    }

    private IEnumerator Damnation()
    {
        animator.SetTrigger("Damnation");

        AnimatorClipInfo[] animatorClipInfo = animator.GetCurrentAnimatorClipInfo(0);

        yield return CoroutineCache.GetCachedWait(animatorClipInfo[0].clip.length);
    }

    private IEnumerator Paranoia()
    {
        animator.SetTrigger("Paranoia");

        AnimatorClipInfo[] animatorClipInfo = animator.GetCurrentAnimatorClipInfo(0);

        yield return CoroutineCache.GetCachedWait(animatorClipInfo[0].clip.length);
    }
}
